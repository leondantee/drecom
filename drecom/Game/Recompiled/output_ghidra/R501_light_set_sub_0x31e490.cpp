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

// Function: R501_light_set_sub
// Address: 0x31e490 - 0x31e670
void R501_light_set_sub_0x31e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R501_light_set_sub_0x31e490");
#endif

    switch (ctx->pc) {
        case 0x31e500u: goto label_31e500;
        case 0x31e51cu: goto label_31e51c;
        case 0x31e52cu: goto label_31e52c;
        default: break;
    }

    ctx->pc = 0x31e490u;

    // 0x31e490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e494: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31e498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e49c: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x31e49cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31e4a0: 0xe7ad0058  swc1        $f13, 0x58($sp)
    ctx->pc = 0x31e4a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31e4a4: 0xe7ae0060  swc1        $f14, 0x60($sp)
    ctx->pc = 0x31e4a4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31e4a8: 0xe7af0068  swc1        $f15, 0x68($sp)
    ctx->pc = 0x31e4a8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31e4ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31e4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4b4: 0x0  nop
    ctx->pc = 0x31e4b4u;
    // NOP
    // 0x31e4b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x31e4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31e4bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31e4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4c4: 0x0  nop
    ctx->pc = 0x31e4c4u;
    // NOP
    // 0x31e4c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31e4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31e4cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4d0: 0x0  nop
    ctx->pc = 0x31e4d0u;
    // NOP
    // 0x31e4d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31e4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31e4d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x31e4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31e4dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31e4e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4e4: 0x0  nop
    ctx->pc = 0x31e4e4u;
    // NOP
    // 0x31e4e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x31e4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31e4ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x31e4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31e4f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x31e4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31e4f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e4f8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x31E4F8u;
    SET_GPR_U32(ctx, 31, 0x31E500u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x31E4F8u, 0x31E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E500u;
label_31e500:
    // 0x31e500: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31e500u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31e504: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x31e508: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31e50c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e510: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31e510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e514: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31E514u;
    SET_GPR_U32(ctx, 31, 0x31E51Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31E514u, 0x31E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E51Cu;
label_31e51c:
    // 0x31e51c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31e51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e520: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x31e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31e524: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31E524u;
    SET_GPR_U32(ctx, 31, 0x31E52Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31E524u, 0x31E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E52Cu;
label_31e52c:
    // 0x31e52c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x31e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e530: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e534: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e538: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e53c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e540: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e548: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x31e548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x31e54c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x31e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e550: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e554: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e558: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e55c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e560: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e568: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x31e568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x31e56c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x31e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e570: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e574: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e578: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e57c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e580: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e588: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x31e588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x31e58c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e590: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e594: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e598: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e59c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e5a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e5a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x31e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x31e5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e5ac: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x31e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e5b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31e5b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31e5b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e5b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e5bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e5c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e5c4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e5cc: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x31e5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x31e5d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e5d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e5d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e5dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e5e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e5e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e5e8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x31e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x31e5ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e5f0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x31e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e5f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31e5f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31e5f8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e5fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e600: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e604: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e608: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e610: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x31e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x31e614: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e61c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e620: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e624: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e628: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e62c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x31e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x31e630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e634: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x31e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e638: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31e638u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31e63c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31e640: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31e644: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31e644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e648: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e64c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31e650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e654: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x31e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x31e658: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x31e658u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e65c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31e65cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e664: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31e664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31e668: 0x3e00008  jr          $ra
    ctx->pc = 0x31E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E670u;
}
