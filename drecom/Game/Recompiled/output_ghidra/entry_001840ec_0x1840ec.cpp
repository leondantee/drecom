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

// Function: entry_001840ec
// Address: 0x1840ec - 0x184130
void entry_001840ec_0x1840ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001840ec_0x1840ec");
#endif

    ctx->pc = 0x1840ecu;

    // 0x1840ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1840ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1840f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1840f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1840f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1840f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1840f8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1840F8u;
    {
        const bool branch_taken_0x1840f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840f8) {
            ctx->pc = 0x184218u;
            return;
        }
    }
    ctx->pc = 0x184100u;
    // 0x184100: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x184100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x184104: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x184104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184108: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x184108u;
    {
        const bool branch_taken_0x184108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184108) {
            ctx->pc = 0x18420Cu;
            return;
        }
    }
    ctx->pc = 0x184110u;
    // 0x184110: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x184110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184114: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184114u;
    {
        const bool branch_taken_0x184114 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184114) {
            ctx->pc = 0x184130u;
            return;
        }
    }
    ctx->pc = 0x18411Cu;
    // 0x18411c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184120: 0x0  nop
    ctx->pc = 0x184120u;
    // NOP
    // 0x184124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184128: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184128u;
    {
        const bool branch_taken_0x184128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184128) {
            ctx->pc = 0x18414Cu;
            return;
        }
    }
    ctx->pc = 0x184130u;
}
