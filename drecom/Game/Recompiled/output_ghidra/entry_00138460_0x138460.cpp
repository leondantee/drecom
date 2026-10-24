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

// Function: entry_00138460
// Address: 0x138460 - 0x1384a0
void entry_00138460_0x138460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138460_0x138460");
#endif

    ctx->pc = 0x138460u;

    // 0x138460: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x138460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138464: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x138464u;
    {
        const bool branch_taken_0x138464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138464) {
            ctx->pc = 0x138438u;
            return;
        }
    }
    ctx->pc = 0x13846Cu;
    // 0x13846c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x13846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x138470: 0xa662008e  sh          $v0, 0x8E($s3)
    ctx->pc = 0x138470u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x138474: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x138478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13847c: 0x0  nop
    ctx->pc = 0x13847cu;
    // NOP
    // 0x138480: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138484: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x138488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13848c: 0x0  nop
    ctx->pc = 0x13848cu;
    // NOP
    // 0x138490: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138494: 0x9262009a  lbu         $v0, 0x9A($s3)
    ctx->pc = 0x138494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13849c: 0xa262009a  sb          $v0, 0x9A($s3)
    ctx->pc = 0x13849cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1384a0u;
}
