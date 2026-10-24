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

// Function: Plw03_atk05_off
// Address: 0x1c6310 - 0x1c6574
void Plw03_atk05_off_0x1c6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk05_off_0x1c6310");
#endif

    switch (ctx->pc) {
        case 0x1c639cu: goto label_1c639c;
        case 0x1c63c4u: goto label_1c63c4;
        case 0x1c6404u: goto label_1c6404;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64bcu: goto label_1c64bc;
        default: break;
    }

    ctx->pc = 0x1c6310u;

    // 0x1c6310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6314: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c6314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c6318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c631c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c6320: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c6324: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c6324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c6328: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c6328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c632c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c632cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c6330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6334: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c6334u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c6338: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c633c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c633cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c6340: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c6340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6344: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c6344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6348: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C6348u;
    {
        const bool branch_taken_0x1c6348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6348) {
            ctx->pc = 0x1C646Cu;
            goto label_1c646c;
        }
    }
    ctx->pc = 0x1C6350u;
    // 0x1c6350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6354: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C6354u;
    {
        const bool branch_taken_0x1c6354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6354) {
            ctx->pc = 0x1C63D4u;
            goto label_1c63d4;
        }
    }
    ctx->pc = 0x1C635Cu;
    // 0x1c635c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C635Cu;
    {
        const bool branch_taken_0x1c635c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c635c) {
            ctx->pc = 0x1C636Cu;
            goto label_1c636c;
        }
    }
    ctx->pc = 0x1C6364u;
    // 0x1c6364: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C6364u;
    {
        const bool branch_taken_0x1c6364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6364) {
            ctx->pc = 0x1C6560u;
            goto label_1c6560;
        }
    }
    ctx->pc = 0x1C636Cu;
label_1c636c:
    // 0x1c636c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c6370: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c6374: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6374u;
    {
        const bool branch_taken_0x1c6374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6374) {
            ctx->pc = 0x1C63A4u;
            goto label_1c63a4;
        }
    }
    ctx->pc = 0x1C637Cu;
    // 0x1c637c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6380: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6384: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c6384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6388: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c6388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c638c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c638cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6390: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6394: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C6394u;
    SET_GPR_U32(ctx, 31, 0x1C639Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6394u, 0x1C639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C639Cu;
label_1c639c:
    // 0x1c639c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C639Cu;
    {
        const bool branch_taken_0x1c639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c639c) {
            ctx->pc = 0x1C63C4u;
            goto label_1c63c4;
        }
    }
    ctx->pc = 0x1C63A4u;
label_1c63a4:
    // 0x1c63a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c63a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c63ac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c63b0: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c63b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c63b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c63b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c63bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C63BCu;
    SET_GPR_U32(ctx, 31, 0x1C63C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C63BCu, 0x1C63C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63C4u;
label_1c63c4:
    // 0x1c63c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c63c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c63c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c63cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c63d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c63d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c63d4:
    // 0x1c63d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c63d8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c63dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C63DCu;
    {
        const bool branch_taken_0x1c63dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c63dc) {
            ctx->pc = 0x1C640Cu;
            goto label_1c640c;
        }
    }
    ctx->pc = 0x1C63E4u;
    // 0x1c63e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c63e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c63ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c63ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c63f0: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1c63f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1c63f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c63f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c63f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c63f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c63fc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C63FCu;
    SET_GPR_U32(ctx, 31, 0x1C6404u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C63FCu, 0x1C6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6404u;
label_1c6404:
    // 0x1c6404: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6404u;
    {
        const bool branch_taken_0x1c6404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6404) {
            ctx->pc = 0x1C642Cu;
            goto label_1c642c;
        }
    }
    ctx->pc = 0x1C640Cu;
label_1c640c:
    // 0x1c640c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6410: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6414: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6418: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1c641c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6420: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6424: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C6424u;
    SET_GPR_U32(ctx, 31, 0x1C642Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C6424u, 0x1C642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C642Cu;
label_1c642c:
    // 0x1c642c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c6430: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c6430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c6434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6438: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c643c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6440: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c6440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6444: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C6444u;
    SET_GPR_U32(ctx, 31, 0x1C644Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C6444u, 0x1C644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C644Cu;
label_1c644c:
    // 0x1c644c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c6450: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c6450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6454: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C6454u;
    SET_GPR_U32(ctx, 31, 0x1C645Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C6454u, 0x1C645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C645Cu;
label_1c645c:
    // 0x1c645c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6460: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c6464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6468: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c646c:
    // 0x1c646c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6470: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6474: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C6474u;
    SET_GPR_U32(ctx, 31, 0x1C647Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6474u, 0x1C647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C647Cu;
label_1c647c:
    // 0x1c647c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6480: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6480u;
    SET_GPR_U32(ctx, 31, 0x1C6488u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6480u, 0x1C6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6488u;
label_1c6488:
    // 0x1c6488: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c648c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6494: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C6494u;
    SET_GPR_U32(ctx, 31, 0x1C649Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6494u, 0x1C649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64a0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C64A0u;
    SET_GPR_U32(ctx, 31, 0x1C64A8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C64A0u, 0x1C64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64A8u;
label_1c64a8:
    // 0x1c64a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c64acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64b0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c64b4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C64B4u;
    SET_GPR_U32(ctx, 31, 0x1C64BCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C64B4u, 0x1C64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64BCu;
label_1c64bc:
    // 0x1c64bc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C64BCu;
    {
        const bool branch_taken_0x1c64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64bc) {
            ctx->pc = 0x1C6548u;
            goto label_1c6548;
        }
    }
    ctx->pc = 0x1C64C4u;
    // 0x1c64c4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c64c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c64c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c64cc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C64CCu;
    {
        const bool branch_taken_0x1c64cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64cc) {
            ctx->pc = 0x1C6518u;
            goto label_1c6518;
        }
    }
    ctx->pc = 0x1C64D4u;
    // 0x1c64d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c64d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c64dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c64e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c64e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c64e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C64E4u;
    {
        const bool branch_taken_0x1c64e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64e4) {
            ctx->pc = 0x1C6518u;
            goto label_1c6518;
        }
    }
    ctx->pc = 0x1C64ECu;
    // 0x1c64ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c64ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c64f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c64f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c64f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c64f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c64fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c6500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6508: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c650c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6510: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6514: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c6514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c6518:
    // 0x1c6518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c651c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c6520: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6520u;
    {
        const bool branch_taken_0x1c6520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6520) {
            ctx->pc = 0x1C6560u;
            goto label_1c6560;
        }
    }
    ctx->pc = 0x1C6528u;
    // 0x1c6528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c652c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6530: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c653c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c653cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6540u;
    {
        const bool branch_taken_0x1c6540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6540) {
            ctx->pc = 0x1C6560u;
            goto label_1c6560;
        }
    }
    ctx->pc = 0x1C6548u;
label_1c6548:
    // 0x1c6548: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c6548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c654c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6550: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6558: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c655c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c655cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c6560:
    // 0x1c6560: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c6560u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6568: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c6568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c656c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6574u;
}
