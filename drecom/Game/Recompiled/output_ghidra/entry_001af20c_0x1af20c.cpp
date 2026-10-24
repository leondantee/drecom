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

// Function: entry_001af20c
// Address: 0x1af20c - 0x1af254
void entry_001af20c_0x1af20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af20c_0x1af20c");
#endif

    ctx->pc = 0x1af20cu;

    // 0x1af20c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1af20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1af210: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1AF210u;
    {
        const bool branch_taken_0x1af210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af210) {
            ctx->pc = 0x1AF500u;
            return;
        }
    }
    ctx->pc = 0x1AF218u;
    // 0x1af218: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1af218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1af21c: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1af21cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af220: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1af224: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af228: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af22c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af22cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af230: 0x8422a4d0  lh          $v0, -0x5B30($at)
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943952)));
    // 0x1af234: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x1af234u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af238: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x1af238u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1af23c: 0x2ea101f4  sltiu       $at, $s5, 0x1F4
    ctx->pc = 0x1af23cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1af240: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF240u;
    {
        const bool branch_taken_0x1af240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af240) {
            ctx->pc = 0x1AF254u;
            return;
        }
    }
    ctx->pc = 0x1AF248u;
    // 0x1af248: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af24c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AF24Cu;
    {
        const bool branch_taken_0x1af24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af24c) {
            ctx->pc = 0x1AF288u;
            return;
        }
    }
    ctx->pc = 0x1AF254u;
}
