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

// Function: caseD_4
// Address: 0x13a954 - 0x13a99c
void caseD_4_0x13a954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x13a954");
#endif

    ctx->pc = 0x13a954u;

    // 0x13a954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a958: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a95c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a960: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a968: 0x0  nop
    ctx->pc = 0x13a968u;
    // NOP
    // 0x13a96c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a970: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a978: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a97c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a980: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a988: 0x0  nop
    ctx->pc = 0x13a988u;
    // NOP
    // 0x13a98c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a990: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x13a994: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x13A994u;
    {
        const bool branch_taken_0x13a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a994) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A99Cu;
}
