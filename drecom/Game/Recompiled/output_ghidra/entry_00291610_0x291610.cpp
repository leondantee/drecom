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

// Function: entry_00291610
// Address: 0x291610 - 0x291670
void entry_00291610_0x291610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291610_0x291610");
#endif

    ctx->pc = 0x291610u;

    // 0x291610: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x291610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29161c: 0x0  nop
    ctx->pc = 0x29161cu;
    // NOP
    // 0x291620: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x291620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291624: 0x0  nop
    ctx->pc = 0x291624u;
    // NOP
    // 0x291628: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291628) {
            ctx->pc = 0x291684u;
            return;
        }
    }
    ctx->pc = 0x291630u;
    // 0x291630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291638: 0x0  nop
    ctx->pc = 0x291638u;
    // NOP
    // 0x29163c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x29163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x291640: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291644: 0xac342a68  sw          $s4, 0x2A68($at)
    ctx->pc = 0x291644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x622A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A68u, _value); } while (0);
    // 0x291648: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x291648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29164c: 0x90820015  lbu         $v0, 0x15($a0)
    ctx->pc = 0x29164cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x291650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291654: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x291654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x291658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291658u;
    {
        const bool branch_taken_0x291658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291658) {
            ctx->pc = 0x291670u;
            return;
        }
    }
    ctx->pc = 0x291660u;
    // 0x291660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291664: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291668: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x291668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x29166c: 0x0  nop
    ctx->pc = 0x29166cu;
    // NOP
    ctx->pc = 0x291670u;
}
