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

// Function: entry_00271aac
// Address: 0x271aac - 0x271b50
void entry_00271aac_0x271aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271aac_0x271aac");
#endif

    ctx->pc = 0x271aacu;

    // 0x271aac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x271aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x271ab0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x271ab4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271ab8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271abc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x271abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x271ac0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x271AC0u;
    {
        const bool branch_taken_0x271ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ac0) {
            ctx->pc = 0x271B70u;
            return;
        }
    }
    ctx->pc = 0x271AC8u;
    // 0x271ac8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x271ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271acc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271ad0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271ad4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271ad8: 0x2463cb90  addiu       $v1, $v1, -0x3470
    ctx->pc = 0x271ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953872));
    // 0x271adc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271ae0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271ae8: 0x0  nop
    ctx->pc = 0x271ae8u;
    // NOP
    // 0x271aec: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x271AECu;
    {
        const bool branch_taken_0x271aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271aec) {
            ctx->pc = 0x271B70u;
            return;
        }
    }
    ctx->pc = 0x271AF4u;
    // 0x271af4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271af8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271afc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271b00: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271b04: 0x2463cb90  addiu       $v1, $v1, -0x3470
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953872));
    // 0x271b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271b0c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x271b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271b10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x271b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x271b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271b18: 0x0  nop
    ctx->pc = 0x271b18u;
    // NOP
    // 0x271b1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x271b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271b20: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x271b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271b24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x271b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271b28: 0x0  nop
    ctx->pc = 0x271b28u;
    // NOP
    // 0x271b2c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x271B2Cu;
    {
        const bool branch_taken_0x271b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271b2c) {
            ctx->pc = 0x271B70u;
            return;
        }
    }
    ctx->pc = 0x271B34u;
    // 0x271b34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x271b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271b3c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271B3Cu;
    {
        const bool branch_taken_0x271b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x271b3c) {
            ctx->pc = 0x271B50u;
            return;
        }
    }
    ctx->pc = 0x271B44u;
    // 0x271b44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271b48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x271b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x271b4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x271b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x271b50u;
}
