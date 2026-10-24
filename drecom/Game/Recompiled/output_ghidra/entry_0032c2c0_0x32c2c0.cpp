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

// Function: entry_0032c2c0
// Address: 0x32c2c0 - 0x32c308
void entry_0032c2c0_0x32c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c2c0_0x32c2c0");
#endif

    ctx->pc = 0x32c2c0u;

    // 0x32c2c0: 0x92c213a6  lbu         $v0, 0x13A6($s6)
    ctx->pc = 0x32c2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5030)));
    // 0x32c2c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x32c2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c2c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32c2cc: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x32C2CCu;
    {
        const bool branch_taken_0x32c2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2cc) {
            ctx->pc = 0x32C3B0u;
            return;
        }
    }
    ctx->pc = 0x32C2D4u;
    // 0x32c2d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c2d8: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x32C2D8u;
    {
        const bool branch_taken_0x32c2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c2d8) {
            ctx->pc = 0x32C388u;
            return;
        }
    }
    ctx->pc = 0x32C2E0u;
    // 0x32c2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c2e4: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32C2E4u;
    {
        const bool branch_taken_0x32c2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2e4) {
            ctx->pc = 0x32C360u;
            return;
        }
    }
    ctx->pc = 0x32C2ECu;
    // 0x32c2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2f0: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C2F0u;
    {
        const bool branch_taken_0x32c2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2f0) {
            ctx->pc = 0x32C330u;
            return;
        }
    }
    ctx->pc = 0x32C2F8u;
    // 0x32c2f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C2F8u;
    {
        const bool branch_taken_0x32c2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c2f8) {
            ctx->pc = 0x32C308u;
            return;
        }
    }
    ctx->pc = 0x32C300u;
    // 0x32c300: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32C300u;
    {
        const bool branch_taken_0x32c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c300) {
            ctx->pc = 0x32C3D8u;
            return;
        }
    }
    ctx->pc = 0x32C308u;
}
