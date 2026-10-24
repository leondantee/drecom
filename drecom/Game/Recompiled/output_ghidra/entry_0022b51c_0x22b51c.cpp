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

// Function: entry_0022b51c
// Address: 0x22b51c - 0x22b548
void entry_0022b51c_0x22b51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b51c_0x22b51c");
#endif

    ctx->pc = 0x22b51cu;

    // 0x22b51c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b520: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b524: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x22b528: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22b52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b530: 0x0  nop
    ctx->pc = 0x22b530u;
    // NOP
    // 0x22b534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b53c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B53Cu;
    {
        const bool branch_taken_0x22b53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b53c) {
            ctx->pc = 0x22B548u;
            return;
        }
    }
    ctx->pc = 0x22B544u;
    // 0x22b544: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22b544u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22b548u;
}
