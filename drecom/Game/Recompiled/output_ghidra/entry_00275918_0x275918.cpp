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

// Function: entry_00275918
// Address: 0x275918 - 0x275a08
void entry_00275918_0x275918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275918_0x275918");
#endif

    ctx->pc = 0x275918u;

    // 0x275918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27591c: 0x146400bf  bne         $v1, $a0, . + 4 + (0xBF << 2)
    ctx->pc = 0x27591Cu;
    {
        const bool branch_taken_0x27591c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27591c) {
            ctx->pc = 0x275C1Cu;
            return;
        }
    }
    ctx->pc = 0x275924u;
    // 0x275924: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275928: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27592c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275930: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275934: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275938: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27593c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275940: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275944: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x275944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x275948: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27594c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27594cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275950: 0x0  nop
    ctx->pc = 0x275950u;
    // NOP
    // 0x275954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275958: 0x0  nop
    ctx->pc = 0x275958u;
    // NOP
    // 0x27595c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x27595Cu;
    {
        const bool branch_taken_0x27595c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27595c) {
            ctx->pc = 0x275A08u;
            return;
        }
    }
    ctx->pc = 0x275964u;
    // 0x275964: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275968: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27596c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27596cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275970: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275974: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275978: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27597c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275980: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275984: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275988: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27598c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27598cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275990: 0x0  nop
    ctx->pc = 0x275990u;
    // NOP
    // 0x275994: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275998: 0x0  nop
    ctx->pc = 0x275998u;
    // NOP
    // 0x27599c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x27599Cu;
    {
        const bool branch_taken_0x27599c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27599c) {
            ctx->pc = 0x275A08u;
            return;
        }
    }
    ctx->pc = 0x2759A4u;
    // 0x2759a4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759a8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2759acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2759b0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2759b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2759b4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2759b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2759bc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2759bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x2759c0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2759c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2759c4: 0xac670060  sw          $a3, 0x60($v1)
    ctx->pc = 0x2759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 7));
    // 0x2759c8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2759c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759cc: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759d0: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x2759d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2759d4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2759d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2759d8: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2759dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2759e0: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x2759e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x2759e4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2759e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759e8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2759e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759ec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2759ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2759f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2759f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2759f4: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x2759f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759f8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2759f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2759fc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x2759fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x275a00: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x275A00u;
    {
        const bool branch_taken_0x275a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a00) {
            ctx->pc = 0x275C70u;
            return;
        }
    }
    ctx->pc = 0x275A08u;
}
