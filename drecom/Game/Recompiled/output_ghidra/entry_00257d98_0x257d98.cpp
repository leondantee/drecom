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

// Function: entry_00257d98
// Address: 0x257d98 - 0x257de0
void entry_00257d98_0x257d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257d98_0x257d98");
#endif

    ctx->pc = 0x257d98u;

    // 0x257d98: 0x92020d84  lbu         $v0, 0xD84($s0)
    ctx->pc = 0x257d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x257d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257da0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x257da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x257da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257da8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x257DA8u;
    {
        const bool branch_taken_0x257da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257da8) {
            ctx->pc = 0x257DE0u;
            return;
        }
    }
    ctx->pc = 0x257DB0u;
    // 0x257db0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x257db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x257db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257db8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x257db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257dc0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x257dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x257dc4: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dc8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x257dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x257dcc: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257dd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257dd4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x257dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x257dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x257DD8u;
    {
        const bool branch_taken_0x257dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257dd8) {
            ctx->pc = 0x257E08u;
            return;
        }
    }
    ctx->pc = 0x257DE0u;
}
