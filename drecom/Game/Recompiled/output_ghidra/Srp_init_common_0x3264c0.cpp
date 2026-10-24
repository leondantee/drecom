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

// Function: Srp_init_common
// Address: 0x3264c0 - 0x3265bc
void Srp_init_common_0x3264c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_init_common_0x3264c0");
#endif

    switch (ctx->pc) {
        case 0x3264fcu: goto label_3264fc;
        case 0x32652cu: goto label_32652c;
        case 0x326580u: goto label_326580;
        case 0x32659cu: goto label_32659c;
        default: break;
    }

    ctx->pc = 0x3264c0u;

    // 0x3264c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3264c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3264c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3264c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3264c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3264c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3264cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3264d0: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x3264d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x3264d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3264d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3264d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3264d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3264dc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3264DCu;
    {
        const bool branch_taken_0x3264dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3264dc) {
            ctx->pc = 0x326550u;
            goto label_326550;
        }
    }
    ctx->pc = 0x3264E4u;
    // 0x3264e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3264e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3264e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3264e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3264ec: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x3264ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x3264f0: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x3264f4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3264F4u;
    SET_GPR_U32(ctx, 31, 0x3264FCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3264FCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3264FCu) { return; }
    ctx->pc = 0x3264FCu;
label_3264fc:
    // 0x3264fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326500: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x326500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x326504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326508: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32650c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x32650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326510: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x326510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326514: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x326518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32651c: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x32651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x326520: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x326520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x326524: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x326524u;
    SET_GPR_U32(ctx, 31, 0x32652Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x32652Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32652Cu) { return; }
    ctx->pc = 0x32652Cu;
label_32652c:
    // 0x32652c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326534: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326538: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x326538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x32653c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326540: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326548: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32654c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x32654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_326550:
    // 0x326550: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326554: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x326554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x326558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32655c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x326560: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x326560u;
    {
        const bool branch_taken_0x326560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326560) {
            ctx->pc = 0x3265ACu;
            goto label_3265ac;
        }
    }
    ctx->pc = 0x326568u;
    // 0x326568: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32656c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x32656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326570: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x326574: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x326574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x326578: 0xc040ca2  jal         func_103288
    ctx->pc = 0x326578u;
    SET_GPR_U32(ctx, 31, 0x326580u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x326580u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x326580u) { return; }
    ctx->pc = 0x326580u;
label_326580:
    // 0x326580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x326584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326588: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x326588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32658c: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x326590: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x326590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x326594: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x326594u;
    SET_GPR_U32(ctx, 31, 0x32659Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x32659Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32659Cu) { return; }
    ctx->pc = 0x32659Cu;
label_32659c:
    // 0x32659c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3265a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3265a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3265a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3265a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3265a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3265a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3265ac:
    // 0x3265ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3265acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3265b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3265b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3265b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3265B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3265B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265BCu;
}
