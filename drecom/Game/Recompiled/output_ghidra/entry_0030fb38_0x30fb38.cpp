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

// Function: entry_0030fb38
// Address: 0x30fb38 - 0x30fc00
void entry_0030fb38_0x30fb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fb38_0x30fb38");
#endif

    ctx->pc = 0x30fb38u;

    // 0x30fb38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb3c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30fb40: 0x2232004  sllv        $a0, $v1, $s1
    ctx->pc = 0x30fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30fb44: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x30fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fb48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30fb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30fb4c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x30FB4Cu;
    {
        const bool branch_taken_0x30fb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb4c) {
            ctx->pc = 0x30FC00u;
            return;
        }
    }
    ctx->pc = 0x30FB54u;
    // 0x30fb54: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30fb58: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30fb5c: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30fb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fb68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fb6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fb74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30fb78: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30fb7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb80: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30fb84: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb88: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x30fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fb8c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x30fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x30fb90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30fb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb98: 0x0  nop
    ctx->pc = 0x30fb98u;
    // NOP
    // 0x30fb9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30fb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30fba0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30fba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30fba4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x30fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fba8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fbb0: 0x0  nop
    ctx->pc = 0x30fbb0u;
    // NOP
    // 0x30fbb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fbb8: 0x0  nop
    ctx->pc = 0x30fbb8u;
    // NOP
    // 0x30fbbc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x30FBBCu;
    {
        const bool branch_taken_0x30fbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fbbc) {
            ctx->pc = 0x30FC00u;
            return;
        }
    }
    ctx->pc = 0x30FBC4u;
    // 0x30fbc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fbcc: 0x0  nop
    ctx->pc = 0x30fbccu;
    // NOP
    // 0x30fbd0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30fbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30fbd4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x30fbd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30fbd8: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x30fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x30fbdc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fbe0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30fbe4: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x30fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30fbe8: 0x602827  not         $a1, $v1
    ctx->pc = 0x30fbe8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30fbec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fbf0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30fbf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30fbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30fbf8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x30fbfc: 0x0  nop
    ctx->pc = 0x30fbfcu;
    // NOP
    ctx->pc = 0x30fc00u;
}
