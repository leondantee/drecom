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

// Function: entry_002feba0
// Address: 0x2feba0 - 0x2febcc
void entry_002feba0_0x2feba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002feba0_0x2feba0");
#endif

    ctx->pc = 0x2feba0u;

    // 0x2feba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feba4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2febac: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FEBACu;
    {
        const bool branch_taken_0x2febac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2febac) {
            ctx->pc = 0x2FEC98u;
            return;
        }
    }
    ctx->pc = 0x2FEBB4u;
    // 0x2febb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2febb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febb8: 0x0  nop
    ctx->pc = 0x2febb8u;
    // NOP
    // 0x2febbc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2febbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2febc0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2febc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2febc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2FEBC4u;
    {
        const bool branch_taken_0x2febc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2febc4) {
            ctx->pc = 0x2FEC88u;
            return;
        }
    }
    ctx->pc = 0x2FEBCCu;
}
