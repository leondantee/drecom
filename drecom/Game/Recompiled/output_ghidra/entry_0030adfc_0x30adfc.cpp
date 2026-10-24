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

// Function: entry_0030adfc
// Address: 0x30adfc - 0x30aea0
void entry_0030adfc_0x30adfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030adfc_0x30adfc");
#endif

    ctx->pc = 0x30adfcu;

    // 0x30adfc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x30ae00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30ae04: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30ae08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ae0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ae10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30ae14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ae18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30ae1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30ae20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ae24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ae28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30ae2c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30ae2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ae30: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x30ae30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30ae34: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x30ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x30ae38: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x30ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ae3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30ae40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae44: 0x0  nop
    ctx->pc = 0x30ae44u;
    // NOP
    // 0x30ae48: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30ae48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30ae4c: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x30ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ae50: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x30ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x30ae54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30ae58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae5c: 0x0  nop
    ctx->pc = 0x30ae5cu;
    // NOP
    // 0x30ae60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30ae60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30ae64: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30ae68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30ae6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae70: 0x0  nop
    ctx->pc = 0x30ae70u;
    // NOP
    // 0x30ae74: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30ae78: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x30ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ae7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ae7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae80: 0x0  nop
    ctx->pc = 0x30ae80u;
    // NOP
    // 0x30ae84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ae84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ae88: 0x0  nop
    ctx->pc = 0x30ae88u;
    // NOP
    // 0x30ae8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30AE8Cu;
    {
        const bool branch_taken_0x30ae8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ae8c) {
            ctx->pc = 0x30AEA0u;
            return;
        }
    }
    ctx->pc = 0x30AE94u;
    // 0x30ae94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ae94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae98: 0x0  nop
    ctx->pc = 0x30ae98u;
    // NOP
    // 0x30ae9c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->pc = 0x30aea0u;
}
