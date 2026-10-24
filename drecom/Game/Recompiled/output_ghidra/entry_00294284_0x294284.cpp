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

// Function: entry_00294284
// Address: 0x294284 - 0x2942b0
void entry_00294284_0x294284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294284_0x294284");
#endif

    ctx->pc = 0x294284u;

    // 0x294284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294288: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x29428c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x294290: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294298: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x29429c: 0x3c03399d  lui         $v1, 0x399D
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14749 << 16));
    // 0x2942a0: 0x34634952  ori         $v1, $v1, 0x4952
    ctx->pc = 0x2942a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18770);
    // 0x2942a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942a8: 0x0  nop
    ctx->pc = 0x2942a8u;
    // NOP
    // 0x2942ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2942acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x2942b0u;
}
