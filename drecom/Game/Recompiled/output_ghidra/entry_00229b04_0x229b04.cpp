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

// Function: entry_00229b04
// Address: 0x229b04 - 0x229b6c
void entry_00229b04_0x229b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229b04_0x229b04");
#endif

    ctx->pc = 0x229b04u;

    // 0x229b04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b08: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b0c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x229b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b10: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x229b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
    // 0x229b14: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x229b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b1c: 0x0  nop
    ctx->pc = 0x229b1cu;
    // NOP
    // 0x229b20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229b24: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x229b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x229b28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b30: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b34: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x229b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x229b38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b40: 0x0  nop
    ctx->pc = 0x229b40u;
    // NOP
    // 0x229b44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229b48: 0x0  nop
    ctx->pc = 0x229b48u;
    // NOP
    // 0x229b4c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x229B4Cu;
    {
        const bool branch_taken_0x229b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229b4c) {
            ctx->pc = 0x229B6Cu;
            return;
        }
    }
    ctx->pc = 0x229B54u;
    // 0x229b54: 0x3c04bfc9  lui         $a0, 0xBFC9
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49097 << 16));
    // 0x229b58: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x229b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x229b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x229b6cu;
}
