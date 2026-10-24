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

// Function: entry_0028bcd4
// Address: 0x28bcd4 - 0x28bd3c
void entry_0028bcd4_0x28bcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bcd4_0x28bcd4");
#endif

    ctx->pc = 0x28bcd4u;

    // 0x28bcd4: 0xc6015df4  lwc1        $f1, 0x5DF4($s0)
    ctx->pc = 0x28bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bcd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bcdc: 0xc4202050  lwc1        $f0, 0x2050($at)
    ctx->pc = 0x28bcdcu;
    { uint32_t bits = FAST_READ32(0x622050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28bce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28bce4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bce8: 0xe4202050  swc1        $f0, 0x2050($at)
    ctx->pc = 0x28bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622050u, _value); } while (0); }
    // 0x28bcec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28bcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28bcf0: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28bcf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28bcf8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28bcf8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28bcfc: 0x0  nop
    ctx->pc = 0x28bcfcu;
    // NOP
    // 0x28bd00: 0x0  nop
    ctx->pc = 0x28bd00u;
    // NOP
    // 0x28bd04: 0x1010  mfhi        $v0
    ctx->pc = 0x28bd04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28bd08: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28BD08u;
    {
        const bool branch_taken_0x28bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bd08) {
            ctx->pc = 0x28BD60u;
            return;
        }
    }
    ctx->pc = 0x28BD10u;
    // 0x28bd10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd14: 0x8c222060  lw          $v0, 0x2060($at)
    ctx->pc = 0x28bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622060u));
    // 0x28bd18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bd1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd20: 0xac222060  sw          $v0, 0x2060($at)
    ctx->pc = 0x28bd20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    // 0x28bd24: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x28bd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28bd28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BD28u;
    {
        const bool branch_taken_0x28bd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bd28) {
            ctx->pc = 0x28BD3Cu;
            return;
        }
    }
    ctx->pc = 0x28BD30u;
    // 0x28bd30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28bd34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd38: 0xac222060  sw          $v0, 0x2060($at)
    ctx->pc = 0x28bd38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    ctx->pc = 0x28bd3cu;
}
