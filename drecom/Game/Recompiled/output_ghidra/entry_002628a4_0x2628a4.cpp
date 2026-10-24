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

// Function: entry_002628a4
// Address: 0x2628a4 - 0x2628e0
void entry_002628a4_0x2628a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002628a4_0x2628a4");
#endif

    ctx->pc = 0x2628a4u;

    // 0x2628a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628a8: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x2628a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628b0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2628b4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2628b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2628b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628bc: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x2628bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x2628c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2628c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2628c4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2628c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2628c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2628C8u;
    {
        const bool branch_taken_0x2628c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2628c8) {
            ctx->pc = 0x2628E0u;
            return;
        }
    }
    ctx->pc = 0x2628D0u;
    // 0x2628d0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628d4: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x2628d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x2628d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2628d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2628dc: 0xa08309e6  sb          $v1, 0x9E6($a0)
    ctx->pc = 0x2628dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2534), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2628e0u;
}
