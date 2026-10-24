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

// Function: caseD_2
// Address: 0x132d10 - 0x132df0
void caseD_2_0x132d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x132d10");
#endif

    switch (ctx->pc) {
        case 0x132d30u: goto label_132d30;
        case 0x132d88u: goto label_132d88;
        case 0x132db0u: goto label_132db0;
        case 0x132dbcu: goto label_132dbc;
        case 0x132dccu: goto label_132dcc;
        case 0x132de0u: goto label_132de0;
        default: break;
    }

    ctx->pc = 0x132d10u;

    // 0x132d10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x132d1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x132d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x132d20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132d24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x132d28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x132D28u;
    SET_GPR_U32(ctx, 31, 0x132D30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132D28u, 0x132D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D30u;
label_132d30:
    // 0x132d30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132d3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x132d40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d48: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x132d48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x132d4c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x132d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x132d50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x132d58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x132d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x132d60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x132d64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x132d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x132d68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x132d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x132d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132d70: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x132d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x132d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d78: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x132d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x132d7c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x132d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x132d80: 0xc048044  jal         func_120110
    ctx->pc = 0x132D80u;
    SET_GPR_U32(ctx, 31, 0x132D88u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x132D80u, 0x132D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D88u;
label_132d88:
    // 0x132d88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x132d8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x132d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x132d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x132d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x132d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132d98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x132d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x132d9c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x132d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x132da0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x132da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x132da4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x132da4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132da8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x132DA8u;
    SET_GPR_U32(ctx, 31, 0x132DB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x132DA8u, 0x132DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DB0u;
label_132db0:
    // 0x132db0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132db4: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x132DB4u;
    SET_GPR_U32(ctx, 31, 0x132DBCu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x132DB4u, 0x132DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DBCu;
label_132dbc:
    // 0x132dbc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x132dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x132dc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x132dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x132dc4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x132DC4u;
    SET_GPR_U32(ctx, 31, 0x132DCCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x132DC4u, 0x132DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DCCu;
label_132dcc:
    // 0x132dcc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x132dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x132dd0: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x132dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x132dd4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x132dd8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x132DD8u;
    SET_GPR_U32(ctx, 31, 0x132DE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x132DD8u, 0x132DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DE0u;
label_132de0:
    // 0x132de0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132de4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132dec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132df0u;
}
