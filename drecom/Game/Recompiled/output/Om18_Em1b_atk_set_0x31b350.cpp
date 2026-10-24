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

// Function: Om18_Em1b_atk_set
// Address: 0x31b350 - 0x31b430
void Om18_Em1b_atk_set_0x31b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_Em1b_atk_set_0x31b350");
#endif

    switch (ctx->pc) {
        case 0x31b3c0u: goto label_31b3c0;
        default: break;
    }

    ctx->pc = 0x31b350u;

    // 0x31b350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31b354: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31b354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31b358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b35c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x31b360: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x31b360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x31b364: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x31b364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x31b368: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x31b368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x31b36c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31b370: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x31b370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31b374: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b37c: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x31b37cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x31b380: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b384: 0xae0312a4  sw          $v1, 0x12A4($s0)
    ctx->pc = 0x31b384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 3));
    // 0x31b388: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b38c: 0xae031298  sw          $v1, 0x1298($s0)
    ctx->pc = 0x31b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 3));
    // 0x31b390: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x31b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b394: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31B394u;
    {
        const bool branch_taken_0x31b394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b394) {
            ctx->pc = 0x31B3C8u;
            goto label_31b3c8;
        }
    }
    ctx->pc = 0x31B39Cu;
    // 0x31b39c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x31b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b3a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31b3a8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x31b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31b3ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x31b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b3b0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x31b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x31b3b4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x31b3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b3b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31B3B8u;
    SET_GPR_U32(ctx, 31, 0x31B3C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31B3C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31B3C0u) { return; }
    ctx->pc = 0x31B3C0u;
label_31b3c0:
    // 0x31b3c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B3C0u;
    {
        const bool branch_taken_0x31b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b3c0) {
            ctx->pc = 0x31B3ECu;
            goto label_31b3ec;
        }
    }
    ctx->pc = 0x31B3C8u;
label_31b3c8:
    // 0x31b3c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b3d0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x31b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31b3d4: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x31b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x31b3d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b3dc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x31b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x31b3e0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b3e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b3e4: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x31b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x31b3e8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_31b3ec:
    // 0x31b3ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3f0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x31b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x31b3f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b3f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b3f8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x31b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x31b3fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31b400: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b404: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b408: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b40c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x31b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b410: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b414: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b418: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31b41c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31b41cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b424: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31b424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31b428: 0x3e00008  jr          $ra
    ctx->pc = 0x31B428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B430u;
}
