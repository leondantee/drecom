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

// Function: entry_0028c5bc
// Address: 0x28c5bc - 0x28c5fc
void entry_0028c5bc_0x28c5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c5bc_0x28c5bc");
#endif

    ctx->pc = 0x28c5bcu;

    // 0x28c5bc: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28c5c0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x28c5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28c5c4: 0xae155dd0  sw          $s5, 0x5DD0($s0)
    ctx->pc = 0x28c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 21));
    // 0x28c5c8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x28c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x28c5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c5d0: 0x0  nop
    ctx->pc = 0x28c5d0u;
    // NOP
    // 0x28c5d4: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28c5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28c5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c5dc: 0xa203663d  sb          $v1, 0x663D($s0)
    ctx->pc = 0x28c5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26173), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c5e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c5e4: 0xac2020f0  sw          $zero, 0x20F0($at)
    ctx->pc = 0x28c5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28c5e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c5ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28c5f0: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28c5f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28c5f4: 0x100004b0  b           . + 4 + (0x4B0 << 2)
    ctx->pc = 0x28C5F4u;
    {
        const bool branch_taken_0x28c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5f4) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28C5FCu;
}
