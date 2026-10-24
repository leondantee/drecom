#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Plw01_atk05_on
// Address: 0x1c1110 - 0x1c13dc
void Plw01_atk05_on_0x1c1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk05_on_0x1c1110");
#endif

    switch (ctx->pc) {
        case 0x1c119cu: goto label_1c119c;
        case 0x1c11c4u: goto label_1c11c4;
        case 0x1c1204u: goto label_1c1204;
        case 0x1c122cu: goto label_1c122c;
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1274u: goto label_1c1274;
        case 0x1c1294u: goto label_1c1294;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12c0u: goto label_1c12c0;
        case 0x1c1310u: goto label_1c1310;
        default: break;
    }

    ctx->pc = 0x1c1110u;

    // 0x1c1110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1114: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c1118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c111c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c111cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c1120: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c1124: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c1128: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c1128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c112c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c112cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c1130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1134: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c1134u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c1138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c113c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c113cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1148: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C1148u;
    {
        const bool branch_taken_0x1c1148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1148) {
            ctx->pc = 0x1C1284u;
            goto label_1c1284;
        }
    }
    ctx->pc = 0x1C1150u;
    // 0x1c1150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1154: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C1154u;
    {
        const bool branch_taken_0x1c1154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1154) {
            ctx->pc = 0x1C11D4u;
            goto label_1c11d4;
        }
    }
    ctx->pc = 0x1C115Cu;
    // 0x1c115c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C115Cu;
    {
        const bool branch_taken_0x1c115c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c115c) {
            ctx->pc = 0x1C116Cu;
            goto label_1c116c;
        }
    }
    ctx->pc = 0x1C1164u;
    // 0x1c1164: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1C1164u;
    {
        const bool branch_taken_0x1c1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1164) {
            ctx->pc = 0x1C13C8u;
            goto label_1c13c8;
        }
    }
    ctx->pc = 0x1C116Cu;
label_1c116c:
    // 0x1c116c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1170: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c1170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c1174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1174u;
    {
        const bool branch_taken_0x1c1174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1174) {
            ctx->pc = 0x1C11A4u;
            goto label_1c11a4;
        }
    }
    ctx->pc = 0x1C117Cu;
    // 0x1c117c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1184: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1188: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c1188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c118c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c118cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1194u;
    SET_GPR_U32(ctx, 31, 0x1C119Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1194u, 0x1C119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C119Cu;
label_1c119c:
    // 0x1c119c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C119Cu;
    {
        const bool branch_taken_0x1c119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c119c) {
            ctx->pc = 0x1C11C4u;
            goto label_1c11c4;
        }
    }
    ctx->pc = 0x1C11A4u;
label_1c11a4:
    // 0x1c11a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c11a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c11a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c11ac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c11b0: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c11b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c11b4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c11b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c11b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c11b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c11bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C11BCu;
    SET_GPR_U32(ctx, 31, 0x1C11C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C11BCu, 0x1C11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C4u;
label_1c11c4:
    // 0x1c11c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c11c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c11c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c11cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c11d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c11d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c11d4:
    // 0x1c11d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c11d8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c11dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C11DCu;
    {
        const bool branch_taken_0x1c11dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11dc) {
            ctx->pc = 0x1C120Cu;
            goto label_1c120c;
        }
    }
    ctx->pc = 0x1C11E4u;
    // 0x1c11e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c11e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c11ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c11f0: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c11f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c11f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c11f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c11fc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C11FCu;
    SET_GPR_U32(ctx, 31, 0x1C1204u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C11FCu, 0x1C1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1204u;
label_1c1204:
    // 0x1c1204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1204u;
    {
        const bool branch_taken_0x1c1204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1204) {
            ctx->pc = 0x1C122Cu;
            goto label_1c122c;
        }
    }
    ctx->pc = 0x1C120Cu;
label_1c120c:
    // 0x1c120c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1210: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1214: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1218: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c1218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c121c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c121cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1220: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1224: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1224u;
    SET_GPR_U32(ctx, 31, 0x1C122Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1224u, 0x1C122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C122Cu;
label_1c122c:
    // 0x1c122c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1230: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c1230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c1234: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1238: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c123c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1c123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c1240: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c1244: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1244u;
    SET_GPR_U32(ctx, 31, 0x1C124Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1244u, 0x1C124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C124Cu;
label_1c124c:
    // 0x1c124c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1254: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c1254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1258: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c125c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C125Cu;
    SET_GPR_U32(ctx, 31, 0x1C1264u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C125Cu, 0x1C1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1264u;
label_1c1264:
    // 0x1c1264: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c1264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c1268: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c126c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C126Cu;
    SET_GPR_U32(ctx, 31, 0x1C1274u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C126Cu, 0x1C1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1274u;
label_1c1274:
    // 0x1c1274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c1278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c127c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c1280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c1284:
    // 0x1c1284: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c128c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C128Cu;
    SET_GPR_U32(ctx, 31, 0x1C1294u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C128Cu, 0x1C1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1298: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1298u;
    SET_GPR_U32(ctx, 31, 0x1C12A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1298u, 0x1C12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12A0u;
label_1c12a0:
    // 0x1c12a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c12a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c12a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c12a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c12ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C12ACu;
    SET_GPR_U32(ctx, 31, 0x1C12B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C12ACu, 0x1C12B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12B4u;
label_1c12b4:
    // 0x1c12b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c12b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C12B8u;
    SET_GPR_U32(ctx, 31, 0x1C12C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C12B8u, 0x1C12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12C0u;
label_1c12c0:
    // 0x1c12c0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c12c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c12c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C12C8u;
    {
        const bool branch_taken_0x1c12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c12c8) {
            ctx->pc = 0x1C12FCu;
            goto label_1c12fc;
        }
    }
    ctx->pc = 0x1C12D0u;
    // 0x1c12d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c12d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c12dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c12e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C12E0u;
    {
        const bool branch_taken_0x1c12e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c12e0) {
            ctx->pc = 0x1C12FCu;
            goto label_1c12fc;
        }
    }
    ctx->pc = 0x1C12E8u;
    // 0x1c12e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c12ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c12f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c12f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c12f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c12fc:
    // 0x1c12fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1300: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1304: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c1304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1308: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C1308u;
    SET_GPR_U32(ctx, 31, 0x1C1310u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C1308u, 0x1C1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1310u;
label_1c1310:
    // 0x1c1310: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1310u;
    {
        const bool branch_taken_0x1c1310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1310) {
            ctx->pc = 0x1C1344u;
            goto label_1c1344;
        }
    }
    ctx->pc = 0x1C1318u;
    // 0x1c1318: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c131c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1320: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c1320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c1324: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c1324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c1328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c132c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c132cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c1330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1334: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c1334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c133c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1340: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c1340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c1344:
    // 0x1c1344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1348: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c1348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c134c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1350: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1354: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C1354u;
    {
        const bool branch_taken_0x1c1354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1354) {
            ctx->pc = 0x1C13C8u;
            goto label_1c13c8;
        }
    }
    ctx->pc = 0x1C135Cu;
    // 0x1c135c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1360: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c1364: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C1364u;
    {
        const bool branch_taken_0x1c1364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1364) {
            ctx->pc = 0x1C13C8u;
            goto label_1c13c8;
        }
    }
    ctx->pc = 0x1C136Cu;
    // 0x1c136c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1370: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1374: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1378: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c137c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C137Cu;
    {
        const bool branch_taken_0x1c137c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c137c) {
            ctx->pc = 0x1C13C8u;
            goto label_1c13c8;
        }
    }
    ctx->pc = 0x1C1384u;
    // 0x1c1384: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c1384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1388: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c138c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c138cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c1390: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1398: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c139c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c13a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13a4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c13a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c13a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c13acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c13b0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c13b8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c13bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c13bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c13c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c13c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c13c8:
    // 0x1c13c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c13c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c13cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c13ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c13d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c13d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C13D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C13DCu;
}
