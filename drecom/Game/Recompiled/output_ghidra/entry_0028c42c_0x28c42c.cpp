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

// Function: entry_0028c42c
// Address: 0x28c42c - 0x28c470
void entry_0028c42c_0x28c42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c42c_0x28c42c");
#endif

    ctx->pc = 0x28c42cu;

    // 0x28c42c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28c42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c430: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x28c430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28c434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c438: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C438u;
    {
        const bool branch_taken_0x28c438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c438) {
            ctx->pc = 0x28C470u;
            return;
        }
    }
    ctx->pc = 0x28C440u;
    // 0x28c440: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x28c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x28c444: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28c444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28c448: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x28c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28c44c: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x28c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x28c450: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c454: 0x3c061c00  lui         $a2, 0x1C00
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7168 << 16));
    // 0x28c458: 0x2684002c  addiu       $a0, $s4, 0x2C
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x28c45c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28c460: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28c464: 0x34452000  ori         $a1, $v0, 0x2000
    ctx->pc = 0x28c464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x28c468: 0x26820038  addiu       $v0, $s4, 0x38
    ctx->pc = 0x28c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x28c46c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x28c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x28c470u;
}
