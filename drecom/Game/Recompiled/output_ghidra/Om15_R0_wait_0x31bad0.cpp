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

// Function: Om15_R0_wait
// Address: 0x31bad0 - 0x31bbe0
void Om15_R0_wait_0x31bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R0_wait_0x31bad0");
#endif

    ctx->pc = 0x31bad0u;

    // 0x31bad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31bad4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x31bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x31bad8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x31bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31badc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31bae0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x31bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31bae4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31bae8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31baec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31baf0: 0x8c641298  lw          $a0, 0x1298($v1)
    ctx->pc = 0x31baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x31baf4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31baf8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31baf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31bafc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31BAFCu;
    {
        const bool branch_taken_0x31bafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bafc) {
            ctx->pc = 0x31BBD4u;
            goto label_31bbd4;
        }
    }
    ctx->pc = 0x31BB04u;
    // 0x31bb04: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x31bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb08: 0x8c831298  lw          $v1, 0x1298($a0)
    ctx->pc = 0x31bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x31bb0c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x31bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x31bb10: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x31bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x31bb14: 0xac831298  sw          $v1, 0x1298($a0)
    ctx->pc = 0x31bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4760), GPR_U32(ctx, 3));
    // 0x31bb18: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x31bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb1c: 0x8ca41298  lw          $a0, 0x1298($a1)
    ctx->pc = 0x31bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4760)));
    // 0x31bb20: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31bb24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31bb28: 0xaca31298  sw          $v1, 0x1298($a1)
    ctx->pc = 0x31bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4760), GPR_U32(ctx, 3));
    // 0x31bb2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb30: 0x8c631298  lw          $v1, 0x1298($v1)
    ctx->pc = 0x31bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x31bb34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x31bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31bb38: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31BB38u;
    {
        const bool branch_taken_0x31bb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bb38) {
            ctx->pc = 0x31BB78u;
            goto label_31bb78;
        }
    }
    ctx->pc = 0x31BB40u;
    // 0x31bb40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31bb44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31bb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31bb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bb50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x31bb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31bb58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bb60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31bb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bb68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31bb70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31BB70u;
    {
        const bool branch_taken_0x31bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bb70) {
            ctx->pc = 0x31BBA4u;
            goto label_31bba4;
        }
    }
    ctx->pc = 0x31BB78u;
label_31bb78:
    // 0x31bb78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31bb7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31bb80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31bb84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31bb88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bb8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bb94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bb98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31bb98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bb9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bba0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31bba4:
    // 0x31bba4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bba8: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x31bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
    // 0x31bbac: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31bbacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bbb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbb4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31bbb8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31bbbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbc0: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x31bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
    // 0x31bbc4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31bbc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bbc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbcc: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x31bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x31bbd0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_31bbd4:
    // 0x31bbd4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31bbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x31BBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BBE0u;
}
