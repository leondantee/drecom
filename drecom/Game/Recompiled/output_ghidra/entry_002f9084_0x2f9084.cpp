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

// Function: entry_002f9084
// Address: 0x2f9084 - 0x2f9208
void entry_002f9084_0x2f9084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9084_0x2f9084");
#endif

    switch (ctx->pc) {
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9158u: goto label_2f9158;
        case 0x2f91d0u: goto label_2f91d0;
        default: break;
    }

    ctx->pc = 0x2f9084u;

    // 0x2f9084: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f9084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f9088: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f908c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2f908cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9090: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9094: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9098: 0x1203005b  beq         $s0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F9098u;
    {
        const bool branch_taken_0x2f9098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9098) {
            ctx->pc = 0x2F9208u;
            return;
        }
    }
    ctx->pc = 0x2F90A0u;
    // 0x2f90a0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90a8: 0x0  nop
    ctx->pc = 0x2f90a8u;
    // NOP
    // 0x2f90ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f90acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f90b0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90b8: 0x0  nop
    ctx->pc = 0x2f90b8u;
    // NOP
    // 0x2f90bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f90c0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90c8: 0x0  nop
    ctx->pc = 0x2f90c8u;
    // NOP
    // 0x2f90cc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f90ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f90d0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f90d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90d8: 0x0  nop
    ctx->pc = 0x2f90d8u;
    // NOP
    // 0x2f90dc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f90dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f90e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f90e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90e8: 0x0  nop
    ctx->pc = 0x2f90e8u;
    // NOP
    // 0x2f90ec: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2f90ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2f90f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f90f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90f8: 0x0  nop
    ctx->pc = 0x2f90f8u;
    // NOP
    // 0x2f90fc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f90fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f9100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9108: 0x0  nop
    ctx->pc = 0x2f9108u;
    // NOP
    // 0x2f910c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2f910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2f9110: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f9114: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f9114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f9118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f911c: 0x0  nop
    ctx->pc = 0x2f911cu;
    // NOP
    // 0x2f9120: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f9120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f9124: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F9124u;
    SET_GPR_U32(ctx, 31, 0x2F912Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F9124u, 0x2F912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F912Cu;
label_2f912c:
    // 0x2f912c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f9130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f9130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9134: 0x0  nop
    ctx->pc = 0x2f9134u;
    // NOP
    // 0x2f9138: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f9138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f913c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f9140: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f9144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9148: 0x0  nop
    ctx->pc = 0x2f9148u;
    // NOP
    // 0x2f914c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f914cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f9150: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F9150u;
    SET_GPR_U32(ctx, 31, 0x2F9158u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F9150u, 0x2F9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9158u;
label_2f9158:
    // 0x2f9158: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f9158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f915c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9160: 0x0  nop
    ctx->pc = 0x2f9160u;
    // NOP
    // 0x2f9164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f9164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f9168: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f916c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9174: 0x0  nop
    ctx->pc = 0x2f9174u;
    // NOP
    // 0x2f9178: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f9178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f917c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9180: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9188: 0x0  nop
    ctx->pc = 0x2f9188u;
    // NOP
    // 0x2f918c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f9190: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2f9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2f9194: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2f9194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2f9198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f919c: 0x0  nop
    ctx->pc = 0x2f919cu;
    // NOP
    // 0x2f91a0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f91a4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f91a8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f91ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f91acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91b0: 0x0  nop
    ctx->pc = 0x2f91b0u;
    // NOP
    // 0x2f91b4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f91b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f91b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f91bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f91bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91c0: 0x0  nop
    ctx->pc = 0x2f91c0u;
    // NOP
    // 0x2f91c4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2f91c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2f91c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F91C8u;
    SET_GPR_U32(ctx, 31, 0x2F91D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F91C8u, 0x2F91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91D0u;
label_2f91d0:
    // 0x2f91d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2f91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2f91d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f91d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f91d8: 0x0  nop
    ctx->pc = 0x2f91d8u;
    // NOP
    // 0x2f91dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f91dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f91e0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2f91e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f91e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91e8: 0x0  nop
    ctx->pc = 0x2f91e8u;
    // NOP
    // 0x2f91ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f91ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f91f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f91f4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f91f8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f91f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f91fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f91fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9200: 0x0  nop
    ctx->pc = 0x2f9200u;
    // NOP
    // 0x2f9204: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f9204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x2f9208u;
}
