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

// Function: entry_002693d4
// Address: 0x2693d4 - 0x2695ac
void entry_002693d4_0x2693d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002693d4_0x2693d4");
#endif

    switch (ctx->pc) {
        case 0x269498u: goto label_269498;
        case 0x26955cu: goto label_26955c;
        case 0x269578u: goto label_269578;
        case 0x26959cu: goto label_26959c;
        case 0x2695a8u: goto label_2695a8;
        default: break;
    }

    ctx->pc = 0x2693d4u;

    // 0x2693d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2693d8: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2693dc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2693e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2693e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2693e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2693e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2693e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2693e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2693ec: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x2693ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
    // 0x2693f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2693f4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2693f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2693f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2693f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2693fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269400: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x269400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269404: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x269408: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x269408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x26940c: 0x12030067  beq         $s0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x26940Cu;
    {
        const bool branch_taken_0x26940c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x26940c) {
            ctx->pc = 0x2695ACu;
            return;
        }
    }
    ctx->pc = 0x269414u;
    // 0x269414: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26941c: 0x0  nop
    ctx->pc = 0x26941cu;
    // NOP
    // 0x269420: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x269420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x269424: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26942c: 0x0  nop
    ctx->pc = 0x26942cu;
    // NOP
    // 0x269430: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x269430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x269434: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26943c: 0x0  nop
    ctx->pc = 0x26943cu;
    // NOP
    // 0x269440: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x269440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x269444: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x269444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x269448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26944c: 0x0  nop
    ctx->pc = 0x26944cu;
    // NOP
    // 0x269450: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x269450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x269454: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x269458: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x269458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x26945c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269460: 0x0  nop
    ctx->pc = 0x269460u;
    // NOP
    // 0x269464: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x269464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x269468: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x26946c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x26946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x269470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269474: 0x0  nop
    ctx->pc = 0x269474u;
    // NOP
    // 0x269478: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x269478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x26947c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x26947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x269480: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x269480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x269484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269488: 0x0  nop
    ctx->pc = 0x269488u;
    // NOP
    // 0x26948c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x26948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x269490: 0xc067648  jal         func_19D920
    ctx->pc = 0x269490u;
    SET_GPR_U32(ctx, 31, 0x269498u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269490u, 0x269498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269498u;
label_269498:
    // 0x269498: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x26949c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2694a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2694a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2694a4: 0x0  nop
    ctx->pc = 0x2694a4u;
    // NOP
    // 0x2694a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2694a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2694ac: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2694b0: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2694b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2694b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694b8: 0x0  nop
    ctx->pc = 0x2694b8u;
    // NOP
    // 0x2694bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2694bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2694c0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2694c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2694c4: 0x3c024417  lui         $v0, 0x4417
    ctx->pc = 0x2694c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17431 << 16));
    // 0x2694c8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2694c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2694cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694d0: 0x0  nop
    ctx->pc = 0x2694d0u;
    // NOP
    // 0x2694d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2694d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2694d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2694d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2694dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694e0: 0x0  nop
    ctx->pc = 0x2694e0u;
    // NOP
    // 0x2694e4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2694e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2694e8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2694e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2694ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694f0: 0x0  nop
    ctx->pc = 0x2694f0u;
    // NOP
    // 0x2694f4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2694f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2694f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2694fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269500: 0x0  nop
    ctx->pc = 0x269500u;
    // NOP
    // 0x269504: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x269504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x269508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26950c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26950cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269510: 0x0  nop
    ctx->pc = 0x269510u;
    // NOP
    // 0x269514: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x269514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x269518: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26951c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269524: 0x0  nop
    ctx->pc = 0x269524u;
    // NOP
    // 0x269528: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x269528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26952c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269530: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269538: 0x0  nop
    ctx->pc = 0x269538u;
    // NOP
    // 0x26953c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x26953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269540: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269544: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26954c: 0x0  nop
    ctx->pc = 0x26954cu;
    // NOP
    // 0x269550: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x269550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x269554: 0xc067648  jal         func_19D920
    ctx->pc = 0x269554u;
    SET_GPR_U32(ctx, 31, 0x26955Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269554u, 0x26955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26955Cu;
label_26955c:
    // 0x26955c: 0x3c023c13  lui         $v0, 0x3C13
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15379 << 16));
    // 0x269560: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x269560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x269564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269568: 0x0  nop
    ctx->pc = 0x269568u;
    // NOP
    // 0x26956c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x26956cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269570: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x269570u;
    SET_GPR_U32(ctx, 31, 0x269578u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x269570u, 0x269578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x3c033f74  lui         $v1, 0x3F74
    ctx->pc = 0x269578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16244 << 16));
    // 0x26957c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x26957cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x269580: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x269580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x269584: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x269588: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x269588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x26958c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x269590: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x269590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x269594: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x269594u;
    SET_GPR_U32(ctx, 31, 0x26959Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x269594u, 0x26959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26959Cu;
label_26959c:
    // 0x26959c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26959cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2695a0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2695A0u;
    SET_GPR_U32(ctx, 31, 0x2695A8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2695A0u, 0x2695A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695A8u;
label_2695a8:
    // 0x2695a8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2695a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x2695acu;
}
