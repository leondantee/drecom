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

// Function: entry_0017648c
// Address: 0x17648c - 0x1764c0
void entry_0017648c_0x17648c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017648c_0x17648c");
#endif

    ctx->pc = 0x17648cu;

    // 0x17648c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176490: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176490u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176494: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17649c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17649cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1764a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1764a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1764a4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1764a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1764a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1764ac: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1764b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1764b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1764b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1764b8: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1764B8u;
    {
        const bool branch_taken_0x1764b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1764b8) {
            ctx->pc = 0x176700u;
            return;
        }
    }
    ctx->pc = 0x1764C0u;
}
