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

// Function: entry_0031cc80
// Address: 0x31cc80 - 0x31ccd4
void entry_0031cc80_0x31cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cc80_0x31cc80");
#endif

    ctx->pc = 0x31cc80u;

    // 0x31cc80: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc84: 0x8c901290  lw          $s0, 0x1290($a0)
    ctx->pc = 0x31cc84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x31cc88: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x31cc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x31cc8c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31CC8Cu;
    {
        const bool branch_taken_0x31cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc8c) {
            ctx->pc = 0x31CCD4u;
            return;
        }
    }
    ctx->pc = 0x31CC94u;
    // 0x31cc94: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc98: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
    // 0x31cc9c: 0x30860002  andi        $a2, $a0, 0x2
    ctx->pc = 0x31cc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x31cca0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x31CCA0u;
    {
        const bool branch_taken_0x31cca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cca0) {
            ctx->pc = 0x31CCD4u;
            return;
        }
    }
    ctx->pc = 0x31CCA8u;
    // 0x31cca8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ccac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ccb0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x31ccb4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ccb8: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x31ccb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ccbc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ccc0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31ccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ccc4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ccc8: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x31ccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cccc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ccd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x31ccd4u;
}
