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

// Function: Plw02_atk05_on
// Address: 0x1c3cb0 - 0x1c3f68
void Plw02_atk05_on_0x1c3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk05_on_0x1c3cb0");
#endif

    switch (ctx->pc) {
        case 0x1c3d3cu: goto label_1c3d3c;
        case 0x1c3d64u: goto label_1c3d64;
        case 0x1c3da4u: goto label_1c3da4;
        case 0x1c3dccu: goto label_1c3dcc;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e60u: goto label_1c3e60;
        case 0x1c3eb0u: goto label_1c3eb0;
        default: break;
    }

    ctx->pc = 0x1c3cb0u;

    // 0x1c3cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3cb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c3cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3cbc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c3cc0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c3cc4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c3cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c3cc8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c3ccc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c3cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3cd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3cd4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3cdc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c3cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3ce0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3ce8: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C3CE8u;
    {
        const bool branch_taken_0x1c3ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3ce8) {
            ctx->pc = 0x1C3E24u;
            goto label_1c3e24;
        }
    }
    ctx->pc = 0x1C3CF0u;
    // 0x1c3cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3cf4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C3CF4u;
    {
        const bool branch_taken_0x1c3cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3cf4) {
            ctx->pc = 0x1C3D74u;
            goto label_1c3d74;
        }
    }
    ctx->pc = 0x1C3CFCu;
    // 0x1c3cfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3CFCu;
    {
        const bool branch_taken_0x1c3cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cfc) {
            ctx->pc = 0x1C3D0Cu;
            goto label_1c3d0c;
        }
    }
    ctx->pc = 0x1C3D04u;
    // 0x1c3d04: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C3D04u;
    {
        const bool branch_taken_0x1c3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d04) {
            ctx->pc = 0x1C3F54u;
            goto label_1c3f54;
        }
    }
    ctx->pc = 0x1C3D0Cu;
label_1c3d0c:
    // 0x1c3d0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3d10: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3d14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3D14u;
    {
        const bool branch_taken_0x1c3d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d14) {
            ctx->pc = 0x1C3D44u;
            goto label_1c3d44;
        }
    }
    ctx->pc = 0x1C3D1Cu;
    // 0x1c3d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d24: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3d28: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c3d2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3d34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3D34u;
    SET_GPR_U32(ctx, 31, 0x1C3D3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3D34u, 0x1C3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D3Cu;
label_1c3d3c:
    // 0x1c3d3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3D3Cu;
    {
        const bool branch_taken_0x1c3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d3c) {
            ctx->pc = 0x1C3D64u;
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C3D44u;
label_1c3d44:
    // 0x1c3d44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d4c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3d50: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c3d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3d5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3D5Cu, 0x1C3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D64u;
label_1c3d64:
    // 0x1c3d64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d68: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3d70: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3d74:
    // 0x1c3d74: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3d78: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3d7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3D7Cu;
    {
        const bool branch_taken_0x1c3d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d7c) {
            ctx->pc = 0x1C3DACu;
            goto label_1c3dac;
        }
    }
    ctx->pc = 0x1C3D84u;
    // 0x1c3d84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d8c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3d90: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c3d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c3d94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3d9c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3DA4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3D9Cu, 0x1C3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DA4u;
label_1c3da4:
    // 0x1c3da4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3DA4u;
    {
        const bool branch_taken_0x1c3da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3da4) {
            ctx->pc = 0x1C3DCCu;
            goto label_1c3dcc;
        }
    }
    ctx->pc = 0x1C3DACu;
label_1c3dac:
    // 0x1c3dac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3db0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3db4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3db8: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c3dbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3dc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3dc4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3DC4u;
    SET_GPR_U32(ctx, 31, 0x1C3DCCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3DC4u, 0x1C3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DCCu;
label_1c3dcc:
    // 0x1c3dcc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3dd0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c3dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c3dd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3dd8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3ddc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c3de0: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c3de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3de4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3DE4u;
    SET_GPR_U32(ctx, 31, 0x1C3DECu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3DE4u, 0x1C3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DECu;
label_1c3dec:
    // 0x1c3dec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3df4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c3df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3df8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c3df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c3dfc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C3DFCu;
    SET_GPR_U32(ctx, 31, 0x1C3E04u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C3DFCu, 0x1C3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E04u;
label_1c3e04:
    // 0x1c3e04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c3e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c3e08: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c3e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3e0c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C3E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E14u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C3E0Cu, 0x1C3E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E14u;
label_1c3e14:
    // 0x1c3e14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e18: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3e20: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3e24:
    // 0x1c3e24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3e28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3e2c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E34u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3E2Cu, 0x1C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E34u;
label_1c3e34:
    // 0x1c3e34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e38: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3E38u;
    SET_GPR_U32(ctx, 31, 0x1C3E40u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3E38u, 0x1C3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E40u;
label_1c3e40:
    // 0x1c3e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3e44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3e4c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E54u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3E4Cu, 0x1C3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E54u;
label_1c3e54:
    // 0x1c3e54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e58: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3E58u;
    SET_GPR_U32(ctx, 31, 0x1C3E60u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3E58u, 0x1C3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E60u;
label_1c3e60:
    // 0x1c3e60: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3e64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c3e68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3E68u;
    {
        const bool branch_taken_0x1c3e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e68) {
            ctx->pc = 0x1C3E9Cu;
            goto label_1c3e9c;
        }
    }
    ctx->pc = 0x1C3E70u;
    // 0x1c3e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3e78: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c3e7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3e80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3E80u;
    {
        const bool branch_taken_0x1c3e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e80) {
            ctx->pc = 0x1C3E9Cu;
            goto label_1c3e9c;
        }
    }
    ctx->pc = 0x1C3E88u;
    // 0x1c3e88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c3e90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3e94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c3e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3e98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c3e9c:
    // 0x1c3e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ea4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3ea8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3EA8u;
    SET_GPR_U32(ctx, 31, 0x1C3EB0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3EA8u, 0x1C3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EB0u;
label_1c3eb0:
    // 0x1c3eb0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3EB0u;
    {
        const bool branch_taken_0x1c3eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3eb0) {
            ctx->pc = 0x1C3EE4u;
            goto label_1c3ee4;
        }
    }
    ctx->pc = 0x1C3EB8u;
    // 0x1c3eb8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ebc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3ec0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3ec4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3ec8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3ecc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3ed0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ed4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c3ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3edc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ee0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c3ee4:
    // 0x1c3ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ee8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c3eec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3EECu;
    {
        const bool branch_taken_0x1c3eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3eec) {
            ctx->pc = 0x1C3F54u;
            goto label_1c3f54;
        }
    }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ef8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c3efc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3EFCu;
    {
        const bool branch_taken_0x1c3efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3efc) {
            ctx->pc = 0x1C3F54u;
            goto label_1c3f54;
        }
    }
    ctx->pc = 0x1C3F04u;
    // 0x1c3f04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3f0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3f10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3f14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3F14u;
    {
        const bool branch_taken_0x1c3f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f14) {
            ctx->pc = 0x1C3F54u;
            goto label_1c3f54;
        }
    }
    ctx->pc = 0x1C3F1Cu;
    // 0x1c3f1c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3f20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f24: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c3f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c3f28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f30: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3f3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3f40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3f44: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3f4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3f50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c3f54:
    // 0x1c3f54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c3f54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3f5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c3f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c3f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3F68u;
}
