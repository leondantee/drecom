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

// Function: entry_0013b95c
// Address: 0x13b95c - 0x13b998
void entry_0013b95c_0x13b95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b95c_0x13b95c");
#endif

    ctx->pc = 0x13b95cu;

    // 0x13b95c: 0x92030100  lbu         $v1, 0x100($s0)
    ctx->pc = 0x13b95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x13b960: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B998u;
            return;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b96c: 0xa2030100  sb          $v1, 0x100($s0)
    ctx->pc = 0x13b96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b970: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13b970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b974: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b978: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x13b97c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B97Cu;
    {
        const bool branch_taken_0x13b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b97c) {
            ctx->pc = 0x13B998u;
            return;
        }
    }
    ctx->pc = 0x13B984u;
    // 0x13b984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b988: 0xa2030101  sb          $v1, 0x101($s0)
    ctx->pc = 0x13b988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b98c: 0xa2000102  sb          $zero, 0x102($s0)
    ctx->pc = 0x13b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b990: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b994: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13b994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    ctx->pc = 0x13b998u;
}
