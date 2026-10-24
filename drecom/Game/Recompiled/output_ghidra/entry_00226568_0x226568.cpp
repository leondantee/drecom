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

// Function: entry_00226568
// Address: 0x226568 - 0x226624
void entry_00226568_0x226568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226568_0x226568");
#endif

    switch (ctx->pc) {
        case 0x2265e0u: goto label_2265e0;
        default: break;
    }

    ctx->pc = 0x226568u;

    // 0x226568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22656c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x22656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x226570: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226574: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x226574u;
    {
        const bool branch_taken_0x226574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226574) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x22657Cu;
    // 0x22657c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226580: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x226580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x226584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226588: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x226588u;
    {
        const bool branch_taken_0x226588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226588) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x226590u;
    // 0x226590: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226594: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226598: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x226598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x22659c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22659Cu;
    {
        const bool branch_taken_0x22659c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22659c) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x2265A4u;
    // 0x2265a4: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x2265a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265ac: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2265ACu;
    {
        const bool branch_taken_0x2265ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2265ac) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x2265B4u;
    // 0x2265b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265b8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2265b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265bc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2265bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2265c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2265c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2265c4: 0x0  nop
    ctx->pc = 0x2265c4u;
    // NOP
    // 0x2265c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2265c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2265cc: 0x0  nop
    ctx->pc = 0x2265ccu;
    // NOP
    // 0x2265d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2265D0u;
    {
        const bool branch_taken_0x2265d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2265d0) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x2265D8u;
    // 0x2265d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2265D8u;
    SET_GPR_U32(ctx, 31, 0x2265E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2265D8u, 0x2265E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265E0u;
label_2265e0:
    // 0x2265e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2265e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2265e4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2265e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2265e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2265e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2265ec: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2265ECu;
    {
        const bool branch_taken_0x2265ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2265ec) {
            ctx->pc = 0x226624u;
            return;
        }
    }
    ctx->pc = 0x2265F4u;
    // 0x2265f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2265f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2265f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2265fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226600: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x226604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226608: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x226608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22660c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226610: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226618: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22661c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226620: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x226624u;
}
