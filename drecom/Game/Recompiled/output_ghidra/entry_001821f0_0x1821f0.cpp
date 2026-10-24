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

// Function: entry_001821f0
// Address: 0x1821f0 - 0x182254
void entry_001821f0_0x1821f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001821f0_0x1821f0");
#endif

    ctx->pc = 0x1821f0u;

    // 0x1821f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821f4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1821f8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1821f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1821fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1821fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x182200: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182204: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182208: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18220c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x182210: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x182210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182214: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x182214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182218: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x18221c: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x18221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x182220: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x182220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x182224: 0x3c06000c  lui         $a2, 0xC
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12 << 16));
    // 0x182228: 0x14e6000a  bne         $a3, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x182228u;
    {
        const bool branch_taken_0x182228 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x182228) {
            ctx->pc = 0x182254u;
            return;
        }
    }
    ctx->pc = 0x182230u;
    // 0x182230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182234: 0x8c23f208  lw          $v1, -0xDF8($at)
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F208u));
    // 0x182238: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x182238u;
    {
        const bool branch_taken_0x182238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182238) {
            ctx->pc = 0x182254u;
            return;
        }
    }
    ctx->pc = 0x182240u;
    // 0x182240: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182244: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182244u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182248: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18224c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182250: 0xac20f208  sw          $zero, -0xDF8($at)
    ctx->pc = 0x182250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F208u, _value); } while (0);
    ctx->pc = 0x182254u;
}
