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

// Function: entry_002909f4
// Address: 0x2909f4 - 0x290a90
void entry_002909f4_0x2909f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002909f4_0x2909f4");
#endif

    ctx->pc = 0x2909f4u;

    // 0x2909f4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2909f8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2909f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2909fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290a00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a04: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290a08: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290a10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x290a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290a1c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a20: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a24: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290a28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290a30: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a34: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290a34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290a38: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290a3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290a44: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x290a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290a4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290a58: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a60: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290a64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290a6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290a70: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a74: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290a74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290a78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a7c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290a80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290a88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a8c: 0x0  nop
    ctx->pc = 0x290a8cu;
    // NOP
    ctx->pc = 0x290a90u;
}
