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

// Function: entry_0030a5fc
// Address: 0x30a5fc - 0x30a678
void entry_0030a5fc_0x30a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a5fc_0x30a5fc");
#endif

    ctx->pc = 0x30a5fcu;

    // 0x30a5fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a600: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a604: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x30a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x30a608: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x30a608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a60c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x30a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30a610: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30a614: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x30a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a618: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30a61c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a620: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a624: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a628: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30a62c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30a62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a630: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x30a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a634: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30a634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30a638: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30a638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30a63c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a640: 0x0  nop
    ctx->pc = 0x30a640u;
    // NOP
    // 0x30a644: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30a644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30a648: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a64c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x30a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a650: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30a654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a658: 0x0  nop
    ctx->pc = 0x30a658u;
    // NOP
    // 0x30a65c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30a65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a660: 0x0  nop
    ctx->pc = 0x30a660u;
    // NOP
    // 0x30a664: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x30A664u;
    {
        const bool branch_taken_0x30a664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a664) {
            ctx->pc = 0x30A678u;
            return;
        }
    }
    ctx->pc = 0x30A66Cu;
    // 0x30a66c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x30a66cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a670: 0x3083fff7  andi        $v1, $a0, 0xFFF7
    ctx->pc = 0x30a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x30a674: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30a674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30a678u;
}
