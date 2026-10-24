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

// Function: entry_0031ec34
// Address: 0x31ec34 - 0x31ec90
void entry_0031ec34_0x31ec34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ec34_0x31ec34");
#endif

    ctx->pc = 0x31ec34u;

    // 0x31ec34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec38: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ec3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ec40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ec44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ec48: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ec4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ec50: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ec54: 0x8c421330  lw          $v0, 0x1330($v0)
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x31ec58: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x31ec58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31ec5c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x31EC5Cu;
    {
        const bool branch_taken_0x31ec5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec5c) {
            ctx->pc = 0x31EC90u;
            return;
        }
    }
    ctx->pc = 0x31EC64u;
    // 0x31ec64: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec68: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ec6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ec70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ec74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ec78: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ec7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ec80: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ec84: 0x8c521330  lw          $s2, 0x1330($v0)
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x31ec88: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x31ec88u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31ec8c: 0x0  nop
    ctx->pc = 0x31ec8cu;
    // NOP
    ctx->pc = 0x31ec90u;
}
