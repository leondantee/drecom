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

// Function: entry_0031ddc4
// Address: 0x31ddc4 - 0x31de14
void entry_0031ddc4_0x31ddc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ddc4_0x31ddc4");
#endif

    ctx->pc = 0x31ddc4u;

    // 0x31ddc4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31ddc8: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x31ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31ddcc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x31ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x31ddd0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DDD0u;
    {
        const bool branch_taken_0x31ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ddd0) {
            ctx->pc = 0x31DE14u;
            return;
        }
    }
    ctx->pc = 0x31DDD8u;
    // 0x31ddd8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dddc: 0x8c4212a0  lw          $v0, 0x12A0($v0)
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x31dde0: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x31dde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31dde4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31dde8: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x31dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31ddec: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31ddf0: 0x8c4212a0  lw          $v0, 0x12A0($v0)
    ctx->pc = 0x31ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x31ddf4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x31ddf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ddfc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31de00: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31de04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31de08: 0x8c621a64  lw          $v0, 0x1A64($v1)
    ctx->pc = 0x31de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6756)));
    // 0x31de0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31de10: 0xac621a64  sw          $v0, 0x1A64($v1)
    ctx->pc = 0x31de10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6756), GPR_U32(ctx, 2));
    ctx->pc = 0x31de14u;
}
