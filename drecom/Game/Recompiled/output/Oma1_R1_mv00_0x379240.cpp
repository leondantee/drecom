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

// Function: Oma1_R1_mv00
// Address: 0x379240 - 0x37937c
void Oma1_R1_mv00_0x379240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_R1_mv00_0x379240");
#endif

    switch (ctx->pc) {
        case 0x379258u: goto label_379258;
        case 0x379288u: goto label_379288;
        case 0x3792c0u: goto label_3792c0;
        case 0x3792d8u: goto label_3792d8;
        case 0x3792e4u: goto label_3792e4;
        case 0x379304u: goto label_379304;
        case 0x379320u: goto label_379320;
        case 0x37932cu: goto label_37932c;
        case 0x379338u: goto label_379338;
        default: break;
    }

    ctx->pc = 0x379240u;

    // 0x379240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x379240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x379244: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x379244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x379248: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x379248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x37924c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379250: 0xc0de4e0  jal         func_379380
    ctx->pc = 0x379250u;
    SET_GPR_U32(ctx, 31, 0x379258u);
    ctx->pc = 0x379380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379380u, 0x379250u, 0x379258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379258u;
label_379258:
    // 0x379258: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x379258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37925c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x37925cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x379260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x379260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x379264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379268: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x379268u;
    {
        const bool branch_taken_0x379268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x379268) {
            ctx->pc = 0x3792B4u;
            goto label_3792b4;
        }
    }
    ctx->pc = 0x379270u;
    // 0x379270: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x379270u;
    {
        const bool branch_taken_0x379270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379270) {
            ctx->pc = 0x379280u;
            goto label_379280;
        }
    }
    ctx->pc = 0x379278u;
    // 0x379278: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x379278u;
    {
        const bool branch_taken_0x379278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379278) {
            ctx->pc = 0x37932Cu;
            goto label_37932c;
        }
    }
    ctx->pc = 0x379280u;
label_379280:
    // 0x379280: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x379280u;
    SET_GPR_U32(ctx, 31, 0x379288u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x379280u, 0x379288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379288u;
label_379288:
    // 0x379288: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x379288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x37928c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x37928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x379290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x379290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379294: 0x0  nop
    ctx->pc = 0x379294u;
    // NOP
    // 0x379298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x379298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37929c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792a0: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3792a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3792a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3792a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3792a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3792ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3792acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3792b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3792b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3792b4:
    // 0x3792b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3792B8u;
    SET_GPR_U32(ctx, 31, 0x3792C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3792C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3792C0u) { return; }
    ctx->pc = 0x3792C0u;
label_3792c0:
    // 0x3792c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3792c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3792c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792cc: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x3792ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3792d0: 0xc040c00  jal         func_103000
    ctx->pc = 0x3792D0u;
    SET_GPR_U32(ctx, 31, 0x3792D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x3792D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3792D8u) { return; }
    ctx->pc = 0x3792D8u;
label_3792d8:
    // 0x3792d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3792d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3792dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3792DCu;
    SET_GPR_U32(ctx, 31, 0x3792E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3792DCu, 0x3792E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792E4u;
label_3792e4:
    // 0x3792e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792e8: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3792e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3792ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3792ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3792f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3792f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3792f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3792fc: 0xc040d62  jal         func_103588
    ctx->pc = 0x3792FCu;
    SET_GPR_U32(ctx, 31, 0x379304u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x379304u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x379304u) { return; }
    ctx->pc = 0x379304u;
label_379304:
    // 0x379304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379308: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x379308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37930c: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x37930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x379310: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x379310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x379314: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x379314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x379318: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x379318u;
    SET_GPR_U32(ctx, 31, 0x379320u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x379318u, 0x379320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379320u;
label_379320:
    // 0x379320: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379324: 0xc05cd10  jal         func_173440
    ctx->pc = 0x379324u;
    SET_GPR_U32(ctx, 31, 0x37932Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x379324u, 0x37932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37932Cu;
label_37932c:
    // 0x37932c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379330: 0xc0de56c  jal         func_3795B0
    ctx->pc = 0x379330u;
    SET_GPR_U32(ctx, 31, 0x379338u);
    ctx->pc = 0x3795B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3795B0u, 0x379330u, 0x379338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379338u;
label_379338:
    // 0x379338: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x379338u;
    {
        const bool branch_taken_0x379338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379338) {
            ctx->pc = 0x37936Cu;
            goto label_37936c;
        }
    }
    ctx->pc = 0x379340u;
    // 0x379340: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x379340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379344: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379348: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x379348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37934c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379350: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x379350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x379354: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379358: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x379358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37935c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379360: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x379360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x379364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379368: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x379368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_37936c:
    // 0x37936c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37936cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379370: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x379370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x379374: 0x3e00008  jr          $ra
    ctx->pc = 0x379374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37937Cu;
}
