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

// Function: Map_menu_move
// Address: 0x32e8a0 - 0x32ead4
void Map_menu_move_0x32e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_menu_move_0x32e8a0");
#endif

    switch (ctx->pc) {
        case 0x32e988u: goto label_32e988;
        case 0x32e9a8u: goto label_32e9a8;
        case 0x32ea68u: goto label_32ea68;
        default: break;
    }

    ctx->pc = 0x32e8a0u;

    // 0x32e8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32e8a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x32e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x32e8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e8b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x32e8b4: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x32e8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x32e8b8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32e8bc: 0x2471fe10  addiu       $s1, $v1, -0x1F0
    ctx->pc = 0x32e8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x32e8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e8c4: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x32e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x32e8c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x32e8cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32e8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32e8d0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x32E8D0u;
    {
        const bool branch_taken_0x32e8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e8d0) {
            ctx->pc = 0x32E9A8u;
            goto label_32e9a8;
        }
    }
    ctx->pc = 0x32E8D8u;
    // 0x32e8d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e8dc: 0x8c22ec18  lw          $v0, -0x13E8($at)
    ctx->pc = 0x32e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e8e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e8e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e8e8: 0xac22ec18  sw          $v0, -0x13E8($at)
    ctx->pc = 0x32e8e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e8ec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e8f0: 0x8c24ec18  lw          $a0, -0x13E8($at)
    ctx->pc = 0x32e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e8f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e8f8: 0x8c23ec10  lw          $v1, -0x13F0($at)
    ctx->pc = 0x32e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32e8fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32e900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e904: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32e904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e908: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32e90c: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x32e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x32e910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e914: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x32e914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x32e918: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e91c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e91cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e924: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x32e924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32e928: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E928u;
    {
        const bool branch_taken_0x32e928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e928) {
            ctx->pc = 0x32E990u;
            goto label_32e990;
        }
    }
    ctx->pc = 0x32E930u;
    // 0x32e930: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e934: 0x8c23ec10  lw          $v1, -0x13F0($at)
    ctx->pc = 0x32e934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32e938: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32e93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e940: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e944: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32e948: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x32e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x32e94c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e950: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x32e950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x32e954: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e958: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e958u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e95c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e960: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e964: 0xac22ec18  sw          $v0, -0x13E8($at)
    ctx->pc = 0x32e964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e96c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x32e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x32e970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32e970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32e974: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x32e974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e978: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32e978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e97c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32e97cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e980: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32E980u;
    SET_GPR_U32(ctx, 31, 0x32E988u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32E980u, 0x32E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E988u;
label_32e988:
    // 0x32e988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32E988u;
    {
        const bool branch_taken_0x32e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e988) {
            ctx->pc = 0x32E9A8u;
            goto label_32e9a8;
        }
    }
    ctx->pc = 0x32E990u;
label_32e990:
    // 0x32e990: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32e990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32e994: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e998: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32e998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e99c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32e99cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e9a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32E9A0u;
    SET_GPR_U32(ctx, 31, 0x32E9A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32E9A0u, 0x32E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9A8u;
label_32e9a8:
    // 0x32e9a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e9ac: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x32e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x32e9b0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x32e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x32e9b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32e9b8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x32E9B8u;
    {
        const bool branch_taken_0x32e9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e9b8) {
            ctx->pc = 0x32EA68u;
            goto label_32ea68;
        }
    }
    ctx->pc = 0x32E9C0u;
    // 0x32e9c0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9c4: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e9c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32e9cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9d0: 0xac23ec18  sw          $v1, -0x13E8($at)
    ctx->pc = 0x32e9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e9d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9d8: 0x8c25ec18  lw          $a1, -0x13E8($at)
    ctx->pc = 0x32e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32e9dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e9e0: 0x8c24ec10  lw          $a0, -0x13F0($at)
    ctx->pc = 0x32e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32e9e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x32e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32e9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e9ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e9f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32e9f4: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x32e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x32e9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e9fc: 0x80630008  lb          $v1, 0x8($v1)
    ctx->pc = 0x32e9fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ea00: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea04: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea08: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x32ea08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32ea0c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x32EA0Cu;
    {
        const bool branch_taken_0x32ea0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea0c) {
            ctx->pc = 0x32EA50u;
            goto label_32ea50;
        }
    }
    ctx->pc = 0x32EA14u;
    // 0x32ea14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea18: 0x8c24ec10  lw          $a0, -0x13F0($at)
    ctx->pc = 0x32ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ea1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x32ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32ea20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ea24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ea28: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32ea2c: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x32ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x32ea30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ea34: 0x80630008  lb          $v1, 0x8($v1)
    ctx->pc = 0x32ea34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ea38: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea40: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea44: 0xac23ec18  sw          $v1, -0x13E8($at)
    ctx->pc = 0x32ea44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32ea48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32EA48u;
    {
        const bool branch_taken_0x32ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea48) {
            ctx->pc = 0x32EA68u;
            goto label_32ea68;
        }
    }
    ctx->pc = 0x32EA50u;
label_32ea50:
    // 0x32ea50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32ea50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ea54: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x32ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32ea58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ea58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ea5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32ea5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ea60: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32EA60u;
    SET_GPR_U32(ctx, 31, 0x32EA68u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32EA60u, 0x32EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA68u;
label_32ea68:
    // 0x32ea68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ea6c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x32ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x32ea70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32ea74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32ea74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32ea78: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32EA78u;
    {
        const bool branch_taken_0x32ea78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea78) {
            ctx->pc = 0x32EABCu;
            goto label_32eabc;
        }
    }
    ctx->pc = 0x32EA80u;
    // 0x32ea80: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea84: 0x8c23ec10  lw          $v1, -0x13F0($at)
    ctx->pc = 0x32ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ea88: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea90: 0xa20365ae  sb          $v1, 0x65AE($s0)
    ctx->pc = 0x32ea90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26030), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ea94: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea98: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32ea9c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32eaa0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32eaa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32eaa4: 0xa20365b0  sb          $v1, 0x65B0($s0)
    ctx->pc = 0x32eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26032), (uint8_t)GPR_U32(ctx, 3));
    // 0x32eaa8: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x32eaac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32eab0: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x32eab4: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x32eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x32eab8: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x32eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
label_32eabc:
    // 0x32eabc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32eabcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32eac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32eac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32eac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32eac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eac8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32eacc: 0x3e00008  jr          $ra
    ctx->pc = 0x32EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EAD4u;
}
