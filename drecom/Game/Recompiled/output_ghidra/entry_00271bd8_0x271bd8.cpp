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

// Function: entry_00271bd8
// Address: 0x271bd8 - 0x271cd0
void entry_00271bd8_0x271bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271bd8_0x271bd8");
#endif

    ctx->pc = 0x271bd8u;

    // 0x271bd8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x271bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x271bdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x271bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x271be0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x271be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x271be4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271be8: 0x8c701390  lw          $s0, 0x1390($v1)
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x271bec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271bf0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x271bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x271bf4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x271BF4u;
    {
        const bool branch_taken_0x271bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271bf4) {
            ctx->pc = 0x271CF0u;
            return;
        }
    }
    ctx->pc = 0x271BFCu;
    // 0x271bfc: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x271bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x271c00: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x271c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271c04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x271c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x271c08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271c0c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271c10: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271c14: 0x2463cba0  addiu       $v1, $v1, -0x3460
    ctx->pc = 0x271c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953888));
    // 0x271c18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271c1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x271c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271c20: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x271c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x271c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c28: 0x0  nop
    ctx->pc = 0x271c28u;
    // NOP
    // 0x271c2c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x271C2Cu;
    {
        const bool branch_taken_0x271c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271c2c) {
            ctx->pc = 0x271CF0u;
            return;
        }
    }
    ctx->pc = 0x271C34u;
    // 0x271c34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271c38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271c3c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271c40: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271c44: 0x2463cba0  addiu       $v1, $v1, -0x3460
    ctx->pc = 0x271c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953888));
    // 0x271c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271c4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x271c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271c50: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x271c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x271c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271c58: 0x0  nop
    ctx->pc = 0x271c58u;
    // NOP
    // 0x271c5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x271c5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271c60: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x271c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271c64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x271c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c68: 0x0  nop
    ctx->pc = 0x271c68u;
    // NOP
    // 0x271c6c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x271C6Cu;
    {
        const bool branch_taken_0x271c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271c6c) {
            ctx->pc = 0x271CF0u;
            return;
        }
    }
    ctx->pc = 0x271C74u;
    // 0x271c74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271c7c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x271C7Cu;
    {
        const bool branch_taken_0x271c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x271c7c) {
            ctx->pc = 0x271CD0u;
            return;
        }
    }
    ctx->pc = 0x271C84u;
    // 0x271c84: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x271c84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x271c88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x271c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x271c8c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x271c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x271c90: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271c94: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x271c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x271c98: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x271c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x271c9c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x271c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271ca0: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x271ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x271ca4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x271ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x271ca8: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x271ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x271cac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x271cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x271cb0: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x271cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x271cb4: 0x8ca31a84  lw          $v1, 0x1A84($a1)
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6788)));
    // 0x271cb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x271cbc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CBCu;
    {
        const bool branch_taken_0x271cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271cbc) {
            ctx->pc = 0x271CD0u;
            return;
        }
    }
    ctx->pc = 0x271CC4u;
    // 0x271cc4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271cc8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x271cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x271ccc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x271cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x271cd0u;
}
