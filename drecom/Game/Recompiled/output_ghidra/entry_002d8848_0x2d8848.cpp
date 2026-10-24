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

// Function: entry_002d8848
// Address: 0x2d8848 - 0x2d88d0
void entry_002d8848_0x2d8848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8848_0x2d8848");
#endif

    switch (ctx->pc) {
        case 0x2d8884u: goto label_2d8884;
        default: break;
    }

    ctx->pc = 0x2d8848u;

    // 0x2d8848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d884c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8850: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2d8854: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2d8854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d8858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d8858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d885c: 0x0  nop
    ctx->pc = 0x2d885cu;
    // NOP
    // 0x2d8860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d8860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8864: 0x0  nop
    ctx->pc = 0x2d8864u;
    // NOP
    // 0x2d8868: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8868u;
    {
        const bool branch_taken_0x2d8868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8868) {
            ctx->pc = 0x2D890Cu;
            return;
        }
    }
    ctx->pc = 0x2D8870u;
    // 0x2d8870: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8874: 0xa49110a6  sh          $s1, 0x10A6($a0)
    ctx->pc = 0x2d8874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8878: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d887c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D887Cu;
    SET_GPR_U32(ctx, 31, 0x2D8884u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D887Cu, 0x2D8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8884u;
label_2d8884:
    // 0x2d8884: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8884u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8888: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d888c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8890: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8890u;
    {
        const bool branch_taken_0x2d8890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8890) {
            ctx->pc = 0x2D88D0u;
            return;
        }
    }
    ctx->pc = 0x2D8898u;
    // 0x2d8898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d889c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d889cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88a0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d88a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d88a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d88a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d88acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d88b0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88b4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x2d88b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88bc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d88c8: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2D88C8u;
    {
        const bool branch_taken_0x2d88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88c8) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D88D0u;
}
