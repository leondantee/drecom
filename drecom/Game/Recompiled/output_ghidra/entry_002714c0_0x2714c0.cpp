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

// Function: entry_002714c0
// Address: 0x2714c0 - 0x271520
void entry_002714c0_0x2714c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002714c0_0x2714c0");
#endif

    ctx->pc = 0x2714c0u;

    // 0x2714c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2714c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2714c4: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x2714c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2714c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2714c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2714cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2714ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2714d0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2714D0u;
    {
        const bool branch_taken_0x2714d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2714d0) {
            ctx->pc = 0x271520u;
            return;
        }
    }
    ctx->pc = 0x2714D8u;
    // 0x2714d8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2714d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2714dc: 0x3c0345a5  lui         $v1, 0x45A5
    ctx->pc = 0x2714dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17829 << 16));
    // 0x2714e0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2714e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2714e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2714e8: 0x0  nop
    ctx->pc = 0x2714e8u;
    // NOP
    // 0x2714ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2714ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2714f0: 0x0  nop
    ctx->pc = 0x2714f0u;
    // NOP
    // 0x2714f4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2714F4u;
    {
        const bool branch_taken_0x2714f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2714f4) {
            ctx->pc = 0x271520u;
            return;
        }
    }
    ctx->pc = 0x2714FCu;
    // 0x2714fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2714fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271500: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x271504: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x271508: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x271508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27150c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271510: 0xac231aa4  sw          $v1, 0x1AA4($at)
    ctx->pc = 0x271510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x271514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27151c: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27151cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    ctx->pc = 0x271520u;
}
