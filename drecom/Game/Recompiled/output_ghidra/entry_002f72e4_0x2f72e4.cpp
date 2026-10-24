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

// Function: entry_002f72e4
// Address: 0x2f72e4 - 0x2f73b4
void entry_002f72e4_0x2f72e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f72e4_0x2f72e4");
#endif

    switch (ctx->pc) {
        case 0x2f72ecu: goto label_2f72ec;
        case 0x2f7350u: goto label_2f7350;
        default: break;
    }

    ctx->pc = 0x2f72e4u;

    // 0x2f72e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F72E4u;
    SET_GPR_U32(ctx, 31, 0x2F72ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F72E4u, 0x2F72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72ECu;
label_2f72ec:
    // 0x2f72ec: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f72f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f72f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f72f4: 0x0  nop
    ctx->pc = 0x2f72f4u;
    // NOP
    // 0x2f72f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f72f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f72fc: 0x3c064234  lui         $a2, 0x4234
    ctx->pc = 0x2f72fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7300: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f7300u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7304: 0x0  nop
    ctx->pc = 0x2f7304u;
    // NOP
    // 0x2f7308: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7308u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f730c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7310: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7314: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7318: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2f7318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2f731c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2f731cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7320: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7324: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7328: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f732c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2f732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f7330: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7334: 0x8d0700c4  lw          $a3, 0xC4($t0)
    ctx->pc = 0x2f7334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7338: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f733c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f733cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7340: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7344: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7344u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7348: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7348u;
    SET_GPR_U32(ctx, 31, 0x2F7350u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7348u, 0x2F7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7350u;
label_2f7350:
    // 0x2f7350: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7350u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7354: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7358: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f735c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7364: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7368: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f736c: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f736cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7374: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7374u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7378: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f7378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f737c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f737cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7380: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7384: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f7384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7388: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x2f7388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f738c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2f738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f7390: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7394: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2f7394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f739c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2f739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2f73a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F73A0u;
    {
        const bool branch_taken_0x2f73a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73a0) {
            ctx->pc = 0x2F73B4u;
            return;
        }
    }
    ctx->pc = 0x2F73A8u;
    // 0x2f73a8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2f73a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f73ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F73ACu;
    {
        const bool branch_taken_0x2f73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73ac) {
            ctx->pc = 0x2F73BCu;
            return;
        }
    }
    ctx->pc = 0x2F73B4u;
}
