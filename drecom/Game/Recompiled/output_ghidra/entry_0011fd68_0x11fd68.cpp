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

// Function: entry_0011fd68
// Address: 0x11fd68 - 0x11fd90
void entry_0011fd68_0x11fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd68_0x11fd68");
#endif

    ctx->pc = 0x11fd68u;

    // 0x11fd68: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11fd6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11FD6Cu;
    {
        const bool branch_taken_0x11fd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD6Cu;
        // 0x11fd70: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd6c) {
            ctx->pc = 0x11FD98u;
            return;
        }
    }
    ctx->pc = 0x11FD74u;
    // 0x11fd74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11fd78: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FD78u;
    {
        const bool branch_taken_0x11fd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD78u;
        // 0x11fd7c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd78) {
            ctx->pc = 0x11FD90u;
            return;
        }
    }
    ctx->pc = 0x11FD80u;
    // 0x11fd80: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x11fd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fd88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11FD88u;
    {
        const bool branch_taken_0x11fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD88u;
        // 0x11fd8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd88) {
            ctx->pc = 0x11FDF0u;
            return;
        }
    }
    ctx->pc = 0x11FD90u;
}
