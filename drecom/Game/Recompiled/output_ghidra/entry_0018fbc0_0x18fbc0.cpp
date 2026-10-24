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

// Function: entry_0018fbc0
// Address: 0x18fbc0 - 0x18fbec
void entry_0018fbc0_0x18fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fbc0_0x18fbc0");
#endif

    ctx->pc = 0x18fbc0u;

    // 0x18fbc0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fbc4: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x18fbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x18fbc8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fbcc: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fbd0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fbd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fbd4: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x18fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x18fbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FBD8u;
    {
        const bool branch_taken_0x18fbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbd8) {
            ctx->pc = 0x18FBECu;
            return;
        }
    }
    ctx->pc = 0x18FBE0u;
    // 0x18fbe0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18fbe0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18fbe4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18FBE4u;
    {
        const bool branch_taken_0x18fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbe4) {
            ctx->pc = 0x18FC6Cu;
            return;
        }
    }
    ctx->pc = 0x18FBECu;
}
