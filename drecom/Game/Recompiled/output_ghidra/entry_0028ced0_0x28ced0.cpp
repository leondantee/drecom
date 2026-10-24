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

// Function: entry_0028ced0
// Address: 0x28ced0 - 0x28cf0c
void entry_0028ced0_0x28ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ced0_0x28ced0");
#endif

    ctx->pc = 0x28ced0u;

    // 0x28ced0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ced0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ced4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ced8: 0xe42020c8  swc1        $f0, 0x20C8($at)
    ctx->pc = 0x28ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6220C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220C8u, _value); } while (0); }
    // 0x28cedc: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28cedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28cee0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x28cee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28cee4: 0x1500000e  bnez        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x28CEE4u;
    {
        const bool branch_taken_0x28cee4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cee4) {
            ctx->pc = 0x28CF20u;
            return;
        }
    }
    ctx->pc = 0x28CEECu;
    // 0x28ceec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ceecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28cef0: 0x8c26c294  lw          $a2, -0x3D6C($at)
    ctx->pc = 0x28cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28cef4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEF4u;
    {
        const bool branch_taken_0x28cef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cef4) {
            ctx->pc = 0x28CF0Cu;
            return;
        }
    }
    ctx->pc = 0x28CEFCu;
    // 0x28cefc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28cf00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28cf00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cf04: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28CF04u;
    SET_GPR_U32(ctx, 31, 0x28CF0Cu);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28CF04u, 0x28CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF0Cu;
}
