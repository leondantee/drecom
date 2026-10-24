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

// Function: entry_00138cf0
// Address: 0x138cf0 - 0x138d30
void entry_00138cf0_0x138cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cf0_0x138cf0");
#endif

    ctx->pc = 0x138cf0u;

    // 0x138cf0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138cf4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138CC8u;
            return;
        }
    }
    ctx->pc = 0x138CFCu;
    // 0x138cfc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x138d00: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x138d00u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x138d04: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x138d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x138d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d0c: 0x0  nop
    ctx->pc = 0x138d0cu;
    // NOP
    // 0x138d10: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138d14: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x138d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x138d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d1c: 0x0  nop
    ctx->pc = 0x138d1cu;
    // NOP
    // 0x138d20: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138d24: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x138d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138d2c: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x138d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x138d30u;
}
