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

// Function: entry_0030e8c4
// Address: 0x30e8c4 - 0x30e9cc
void entry_0030e8c4_0x30e8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e8c4_0x30e8c4");
#endif

    switch (ctx->pc) {
        case 0x30e8f0u: goto label_30e8f0;
        case 0x30e904u: goto label_30e904;
        case 0x30e9c0u: goto label_30e9c0;
        default: break;
    }

    ctx->pc = 0x30e8c4u;

    // 0x30e8c4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x30e8c8: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x30e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x30e8cc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x30e8ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e8d0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8d4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30e8dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e8e0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x30e8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x30e8e4: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x30e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x30e8e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x30E8E8u;
    SET_GPR_U32(ctx, 31, 0x30E8F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30E8E8u, 0x30E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E8F0u;
label_30e8f0:
    // 0x30e8f0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8f4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x30e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e8f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30e8f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e8fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30E8FCu;
    SET_GPR_U32(ctx, 31, 0x30E904u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30E8FCu, 0x30E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E904u;
label_30e904:
    // 0x30e904: 0x8fb30298  lw          $s3, 0x298($sp)
    ctx->pc = 0x30e904u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e908: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x30e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
    // 0x30e90c: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e910: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x30e910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x30e914: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x30e914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e918: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x30e918u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x30e91c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e920: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x30e920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30e924: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x30E924u;
    {
        const bool branch_taken_0x30e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e924) {
            ctx->pc = 0x30EA1Cu;
            return;
        }
    }
    ctx->pc = 0x30E92Cu;
    // 0x30e92c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e930: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x30e930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30e934: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30e934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e938: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30e938u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30e93c: 0x28810083  slti        $at, $a0, 0x83
    ctx->pc = 0x30e93cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x30e940: 0x14200071  bnez        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x30E940u;
    {
        const bool branch_taken_0x30e940 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e940) {
            ctx->pc = 0x30EB08u;
            return;
        }
    }
    ctx->pc = 0x30E948u;
    // 0x30e948: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x30e94c: 0x24a399b0  addiu       $v1, $a1, -0x6650
    ctx->pc = 0x30e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941104));
    // 0x30e950: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30e954: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30e954u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3999B0u));
    // 0x30e958: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30e958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30e95c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30e960: 0x248599c0  addiu       $a1, $a0, -0x6640
    ctx->pc = 0x30e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941120));
    // 0x30e964: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e968: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x30e968u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3999C0u));
    // 0x30e96c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30e970: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e974: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e978: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30e978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30e97c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e980: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E980u;
    {
        const bool branch_taken_0x30e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e980) {
            ctx->pc = 0x30E9CCu;
            return;
        }
    }
    ctx->pc = 0x30E988u;
    // 0x30e988: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e98c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x30e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x30e990: 0x24c70200  addiu       $a3, $a2, 0x200
    ctx->pc = 0x30e990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x30e994: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x30e994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30e998: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30e998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30e99c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e9a0: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x30e9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x30e9a4: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x30e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x30e9a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x30e9a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e9ac: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30e9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e9b4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30e9b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30E9B8u;
    SET_GPR_U32(ctx, 31, 0x30E9C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30E9B8u, 0x30E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9C0u;
label_30e9c0:
    // 0x30e9c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30e9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e9c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30E9C4u;
    SET_GPR_U32(ctx, 31, 0x30E9CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30E9C4u, 0x30E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9CCu;
}
