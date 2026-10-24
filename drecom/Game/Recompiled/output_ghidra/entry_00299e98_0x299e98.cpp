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

// Function: entry_00299e98
// Address: 0x299e98 - 0x299ed0
void entry_00299e98_0x299e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299e98_0x299e98");
#endif

    ctx->pc = 0x299e98u;

    // 0x299e98: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299e9c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x299e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x299ea0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x299ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x299ea4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ea8: 0x946201a8  lhu         $v0, 0x1A8($v1)
    ctx->pc = 0x299ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x299eac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299eb0: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x299eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x299eb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299EB4u;
    {
        const bool branch_taken_0x299eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299eb4) {
            ctx->pc = 0x299ED0u;
            return;
        }
    }
    ctx->pc = 0x299EBCu;
    // 0x299ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299ec0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ec4: 0xe44001d4  swc1        $f0, 0x1D4($v0)
    ctx->pc = 0x299ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 468), bits); }
    // 0x299ec8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x299EC8u;
    {
        const bool branch_taken_0x299ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ec8) {
            ctx->pc = 0x299F14u;
            return;
        }
    }
    ctx->pc = 0x299ED0u;
}
