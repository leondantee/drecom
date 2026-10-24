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

// Function: entry_00262dec
// Address: 0x262dec - 0x262e28
void entry_00262dec_0x262dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262dec_0x262dec");
#endif

    ctx->pc = 0x262decu;

    // 0x262dec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262df0: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262df4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262df8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x262dfc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x262dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x262e00: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e04: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262e08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262e0c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x262e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262e10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262E10u;
    {
        const bool branch_taken_0x262e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e10) {
            ctx->pc = 0x262E28u;
            return;
        }
    }
    ctx->pc = 0x262E18u;
    // 0x262e18: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x262e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e1c: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x262e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x262e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262e24: 0xa08309e6  sb          $v1, 0x9E6($a0)
    ctx->pc = 0x262e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2534), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x262e28u;
}
