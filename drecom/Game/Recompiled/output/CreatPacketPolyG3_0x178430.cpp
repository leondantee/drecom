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

// Function: CreatPacketPolyG3
// Address: 0x178430 - 0x178588
void CreatPacketPolyG3_0x178430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyG3_0x178430");
#endif

    ctx->pc = 0x178430u;

    // 0x178430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17843c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x178440: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x178440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178444: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x178444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x178448: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17844c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x178450: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x178450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178458: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x178458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17845c: 0x3c020414  lui         $v0, 0x414
    ctx->pc = 0x17845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1044 << 16));
    // 0x178460: 0x34431410  ori         $v1, $v0, 0x1410
    ctx->pc = 0x178460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5136);
    // 0x178464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178468: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17846c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178470: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178474: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178478: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17847c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x17847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x178480: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x178484: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x178484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x178488: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17848c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17848cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x178490: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x178490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x178494: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17849c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17849cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1784a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1784a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1784a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1784a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784ac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1784acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1784b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1784b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1784b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1784b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1784bc: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1784bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1784c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1784c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1784c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1784c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1784cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1784d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1784d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1784d8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1784d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1784dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1784dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1784e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784e4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1784e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1784e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1784e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1784ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1784ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1784f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784f4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1784f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1784f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1784f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1784fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1784fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178500: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178504: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x178504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x178508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17850c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178510: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178514: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x178514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x178518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17851c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x17851cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178520: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x178524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17852c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178530: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17853c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17853cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178544: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178548: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17854c: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x17854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x178550: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17855c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x17855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x178560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178564: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178568: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17856c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178570: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17857c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17857cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178580: 0x3e00008  jr          $ra
    ctx->pc = 0x178580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178588u;
}
