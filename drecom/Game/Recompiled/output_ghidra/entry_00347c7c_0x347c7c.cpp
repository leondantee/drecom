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

// Function: entry_00347c7c
// Address: 0x347c7c - 0x347d30
void entry_00347c7c_0x347c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347c7c_0x347c7c");
#endif

    switch (ctx->pc) {
        case 0x347ca8u: goto label_347ca8;
        default: break;
    }

    ctx->pc = 0x347c7cu;

    // 0x347c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c84: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347c88: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x347c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c90: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x347c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x347c94: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x347c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x347c98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x347c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x347c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x347ca0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x347CA0u;
    SET_GPR_U32(ctx, 31, 0x347CA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x347CA0u, 0x347CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CA8u;
label_347ca8:
    // 0x347ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x347cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347cb0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x347cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x347cb4: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x347cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x347cb8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x347cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x347cbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x347cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347cc4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x347cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347cc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347cd4: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x347cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x347cd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347cdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347ce0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347ce4: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x347ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x347ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347cf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x347cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x347cf4: 0x34700010  ori         $s0, $v1, 0x10
    ctx->pc = 0x347cf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x347cf8: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x347cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x347cfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d00: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347d04: 0x24630960  addiu       $v1, $v1, 0x960
    ctx->pc = 0x347d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x347d08: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x347d08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x347d0c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347d10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x347d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347d14: 0x34a30004  ori         $v1, $a1, 0x4
    ctx->pc = 0x347d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x347d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347d1c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x347d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x347d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d24: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x347d24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x347d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d2c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x347d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x347d30u;
}
