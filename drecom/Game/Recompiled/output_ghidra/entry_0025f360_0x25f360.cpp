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

// Function: entry_0025f360
// Address: 0x25f360 - 0x25f390
void entry_0025f360_0x25f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f360_0x25f360");
#endif

    ctx->pc = 0x25f360u;

    // 0x25f360: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f364: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25f364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f368: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F368u;
    {
        const bool branch_taken_0x25f368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f368) {
            ctx->pc = 0x25F390u;
            return;
        }
    }
    ctx->pc = 0x25F370u;
    // 0x25f370: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f374: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f378: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f37c: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f380: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f384: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f388: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F388u;
    SET_GPR_U32(ctx, 31, 0x25F390u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F390u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F390u) { return; }
    ctx->pc = 0x25F390u;
}
