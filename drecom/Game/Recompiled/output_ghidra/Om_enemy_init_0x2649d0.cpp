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

// Function: Om_enemy_init
// Address: 0x2649d0 - 0x26502c
void Om_enemy_init_0x2649d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_enemy_init_0x2649d0");
#endif

    switch (ctx->pc) {
        case 0x264a74u: goto label_264a74;
        case 0x264ad0u: goto label_264ad0;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b5cu: goto label_264b5c;
        case 0x264d38u: goto label_264d38;
        case 0x264e3cu: goto label_264e3c;
        case 0x264e48u: goto label_264e48;
        case 0x264e64u: goto label_264e64;
        case 0x264f78u: goto label_264f78;
        default: break;
    }

    ctx->pc = 0x2649d0u;

    // 0x2649d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2649d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2649d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2649d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2649d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2649d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2649dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2649dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2649e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2649e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2649e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2649e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2649e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2649e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2649ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2649ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2649f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2649f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2649f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2649f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2649f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2649f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2649fc: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2649fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x264a00: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x264a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x264a04: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x264a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x264a08: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x264a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x264a0c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x264a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x264a10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x264a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x264a14: 0x2463fe10  addiu       $v1, $v1, -0x1F0
    ctx->pc = 0x264a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x264a18: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x264a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x264a1c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x264a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x264a20: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x264a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x264a24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264a28: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x264a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x264a2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264a30: 0x8c33e680  lw          $s3, -0x1980($at)
    ctx->pc = 0x264a30u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61E680u));
    // 0x264a34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264a38: 0x8c23e678  lw          $v1, -0x1988($at)
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E678u));
    // 0x264a3c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x264a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x264a40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264a44: 0x8c34e67c  lw          $s4, -0x1984($at)
    ctx->pc = 0x264a44u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x61E67Cu));
    // 0x264a48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264a4c: 0x8c23e678  lw          $v1, -0x1988($at)
    ctx->pc = 0x264a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E678u));
    // 0x264a50: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x264a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x264a54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264a58: 0x8c23e67c  lw          $v1, -0x1984($at)
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E67Cu));
    // 0x264a5c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x264a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x264a60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264a64: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x264a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x264a68: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x264a68u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264a6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264A6Cu;
    {
        const bool branch_taken_0x264a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a6c) {
            ctx->pc = 0x264A88u;
            goto label_264a88;
        }
    }
    ctx->pc = 0x264A74u;
label_264a74:
    // 0x264a74: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x264a78: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x264a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264a80: 0xac6001ac  sw          $zero, 0x1AC($v1)
    ctx->pc = 0x264a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 0));
    // 0x264a84: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x264a84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_264a88:
    // 0x264a88: 0x2ee30010  sltiu       $v1, $s7, 0x10
    ctx->pc = 0x264a88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x264a8c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x264A8Cu;
    {
        const bool branch_taken_0x264a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a8c) {
            ctx->pc = 0x264A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264a74;
        }
    }
    ctx->pc = 0x264A94u;
    // 0x264a94: 0x8fb600e8  lw          $s6, 0xE8($sp)
    ctx->pc = 0x264a94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264a98: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x264a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x264a9c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x264a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x264aa0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264aa4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x264aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264aa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264aac: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x264aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x264ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ab4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264ab8: 0xa023e653  sb          $v1, -0x19AD($at)
    ctx->pc = 0x264ab8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E653u, _value); } while (0);
    // 0x264abc: 0x26c30004  addiu       $v1, $s6, 0x4
    ctx->pc = 0x264abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x264ac0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264ac4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x264ac4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264ac8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x264AC8u;
    {
        const bool branch_taken_0x264ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ac8) {
            ctx->pc = 0x264F98u;
            goto label_264f98;
        }
    }
    ctx->pc = 0x264AD0u;
label_264ad0:
    // 0x264ad0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264ad4: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x264ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264ad8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x264ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264adc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x264adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x264ae0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264ae4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264ae8: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x264ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x264aec: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264af0: 0x8c500a68  lw          $s0, 0xA68($v0)
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264af4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264af8: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x264af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x264afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x264b00: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x264b04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264b08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x264b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x264b0c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x264b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x264b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264b14: 0xac501390  sw          $s0, 0x1390($v0)
    ctx->pc = 0x264b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 16));
    // 0x264b18: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x264b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x264b1c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x264b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264b24: 0xac5001ac  sw          $s0, 0x1AC($v0)
    ctx->pc = 0x264b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 16));
    // 0x264b28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x264b28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x264b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x264b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264b30: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x264b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x264b34: 0xc046314  jal         func_118C50
    ctx->pc = 0x264B34u;
    SET_GPR_U32(ctx, 31, 0x264B3Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x264B3Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x264B3Cu) { return; }
    ctx->pc = 0x264B3Cu;
label_264b3c:
    // 0x264b3c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264b40: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x264b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x264b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b48: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x264b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x264b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x264b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x264b50: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x264b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x264b54: 0xc09909c  jal         func_264270
    ctx->pc = 0x264B54u;
    SET_GPR_U32(ctx, 31, 0x264B5Cu);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x264B54u, 0x264B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B5Cu;
label_264b5c:
    // 0x264b5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264b68: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264B68u;
    {
        const bool branch_taken_0x264b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x264b68) {
            ctx->pc = 0x264B84u;
            goto label_264b84;
        }
    }
    ctx->pc = 0x264B70u;
    // 0x264b70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264b78: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264b7c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x264B7Cu;
    {
        const bool branch_taken_0x264b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b7c) {
            ctx->pc = 0x264F90u;
            goto label_264f90;
        }
    }
    ctx->pc = 0x264B84u;
label_264b84:
    // 0x264b84: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b8c: 0x2c3a821  addu        $s5, $s6, $v1
    ctx->pc = 0x264b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264b90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264b98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264b9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ba8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264BA8u;
    {
        const bool branch_taken_0x264ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ba8) {
            ctx->pc = 0x264BC8u;
            goto label_264bc8;
        }
    }
    ctx->pc = 0x264BB0u;
    // 0x264bb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264bb8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264bbc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x264bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x264bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264BC0u;
    {
        const bool branch_taken_0x264bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bc0) {
            ctx->pc = 0x264BD0u;
            goto label_264bd0;
        }
    }
    ctx->pc = 0x264BC8u;
label_264bc8:
    // 0x264bc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264bcc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x264bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_264bd0:
    // 0x264bd0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264bd8: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264bdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264be0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264be4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264be8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264BE8u;
    {
        const bool branch_taken_0x264be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264be8) {
            ctx->pc = 0x264C08u;
            goto label_264c08;
        }
    }
    ctx->pc = 0x264BF0u;
    // 0x264bf0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264bf8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264bfc: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x264bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x264c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C00u;
    {
        const bool branch_taken_0x264c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c00) {
            ctx->pc = 0x264C10u;
            goto label_264c10;
        }
    }
    ctx->pc = 0x264C08u;
label_264c08:
    // 0x264c08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c0c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x264c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_264c10:
    // 0x264c10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c18: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c1c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c28: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264C28u;
    {
        const bool branch_taken_0x264c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264c28) {
            ctx->pc = 0x264C48u;
            goto label_264c48;
        }
    }
    ctx->pc = 0x264C30u;
    // 0x264c30: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c38: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264c3c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x264c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x264c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C48u;
label_264c48:
    // 0x264c48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c4c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x264c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_264c50:
    // 0x264c50: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c54: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c58: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c68: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264C68u;
    {
        const bool branch_taken_0x264c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264c68) {
            ctx->pc = 0x264C88u;
            goto label_264c88;
        }
    }
    ctx->pc = 0x264C70u;
    // 0x264c70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c78: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264c7c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x264c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x264c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C80u;
    {
        const bool branch_taken_0x264c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c80) {
            ctx->pc = 0x264C90u;
            goto label_264c90;
        }
    }
    ctx->pc = 0x264C88u;
label_264c88:
    // 0x264c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c8c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x264c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_264c90:
    // 0x264c90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ca0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ca8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264CA8u;
    {
        const bool branch_taken_0x264ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ca8) {
            ctx->pc = 0x264CC8u;
            goto label_264cc8;
        }
    }
    ctx->pc = 0x264CB0u;
    // 0x264cb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264cb8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264cbc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x264cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x264cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264CC0u;
    {
        const bool branch_taken_0x264cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264cc0) {
            ctx->pc = 0x264CD0u;
            goto label_264cd0;
        }
    }
    ctx->pc = 0x264CC8u;
label_264cc8:
    // 0x264cc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ccc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x264cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_264cd0:
    // 0x264cd0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264cd8: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264cdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ce0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ce4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ce8: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x264CE8u;
    {
        const bool branch_taken_0x264ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ce8) {
            ctx->pc = 0x264F18u;
            goto label_264f18;
        }
    }
    ctx->pc = 0x264CF0u;
    // 0x264cf0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264cf8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x264cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x264cfc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x264cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x264d00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x264d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x264d04: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264D04u;
    {
        const bool branch_taken_0x264d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264d04) {
            ctx->pc = 0x264DA4u;
            goto label_264da4;
        }
    }
    ctx->pc = 0x264D0Cu;
    // 0x264d0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x264d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x264d10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264D10u;
    {
        const bool branch_taken_0x264d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264d10) {
            ctx->pc = 0x264D20u;
            goto label_264d20;
        }
    }
    ctx->pc = 0x264D18u;
    // 0x264d18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x264D18u;
    {
        const bool branch_taken_0x264d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d18) {
            ctx->pc = 0x264DFCu;
            goto label_264dfc;
        }
    }
    ctx->pc = 0x264D20u;
label_264d20:
    // 0x264d20: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264d24: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x264d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x264d28: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264d2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x264d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264d30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264D30u;
    {
        const bool branch_taken_0x264d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d30) {
            ctx->pc = 0x264D68u;
            goto label_264d68;
        }
    }
    ctx->pc = 0x264D38u;
label_264d38:
    // 0x264d38: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264d3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264d40: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x264d44: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x264d48: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x264d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x264d4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x264d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x264d50: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x264d54: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x264d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x264d58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264d5c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264d60: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x264d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_264d68:
    // 0x264d68: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x264d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x264d6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x264d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264d70: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x264d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264d74: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x264D74u;
    {
        const bool branch_taken_0x264d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d74) {
            ctx->pc = 0x264D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264d38;
        }
    }
    ctx->pc = 0x264D7Cu;
    // 0x264d7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d80: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x264d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x264d84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d88: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264d8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d90: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d98: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264d9c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x264D9Cu;
    {
        const bool branch_taken_0x264d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d9c) {
            ctx->pc = 0x264F58u;
            goto label_264f58;
        }
    }
    ctx->pc = 0x264DA4u;
label_264da4:
    // 0x264da4: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264da8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x264da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x264dac: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264db0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264db4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264db8: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x264db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x264dbc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x264dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x264dc0: 0x2c3f021  addu        $fp, $s6, $v1
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264dc4: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x264dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x264dc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264dcc: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264dd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264dd4: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264dd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ddc: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264de0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264de4: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x264de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x264de8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264dec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264df0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264df4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x264DF4u;
    {
        const bool branch_taken_0x264df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264df4) {
            ctx->pc = 0x264F58u;
            goto label_264f58;
        }
    }
    ctx->pc = 0x264DFCu;
label_264dfc:
    // 0x264dfc: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264e00: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x264e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x264e04: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264e08: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264e0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264e10: 0x2c3f021  addu        $fp, $s6, $v1
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264e14: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x264e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x264e18: 0x107e0033  beq         $v1, $fp, . + 4 + (0x33 << 2)
    ctx->pc = 0x264E18u;
    {
        const bool branch_taken_0x264e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x264e18) {
            ctx->pc = 0x264EE8u;
            goto label_264ee8;
        }
    }
    ctx->pc = 0x264E20u;
    // 0x264e20: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x264e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x264e24: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x264e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x264e28: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x264e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264e2c: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x264e2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264e30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264e34: 0xc05e858  jal         func_17A160
    ctx->pc = 0x264E34u;
    SET_GPR_U32(ctx, 31, 0x264E3Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x264E34u, 0x264E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E3Cu;
label_264e3c:
    // 0x264e3c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x264e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x264e40: 0xc05e964  jal         func_17A590
    ctx->pc = 0x264E40u;
    SET_GPR_U32(ctx, 31, 0x264E48u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x264E40u, 0x264E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E48u;
label_264e48:
    // 0x264e48: 0xafb300b0  sw          $s3, 0xB0($sp)
    ctx->pc = 0x264e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 19));
    // 0x264e4c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x264e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264e50: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x264e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x264e54: 0xafb400d8  sw          $s4, 0xD8($sp)
    ctx->pc = 0x264e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 20));
    // 0x264e58: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x264e58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x264E5Cu;
    {
        const bool branch_taken_0x264e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e5c) {
            ctx->pc = 0x264E90u;
            goto label_264e90;
        }
    }
    ctx->pc = 0x264E64u;
label_264e64:
    // 0x264e64: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x264e68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x264e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264e70: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264e74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264e78: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264e80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x264e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x264e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x264e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264e88: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x264e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x264e8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x264e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_264e90:
    // 0x264e90: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x264e94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x264e98: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264e9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264ea0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ea8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x264ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x264eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x264eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264eb0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x264eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264eb4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x264EB4u;
    {
        const bool branch_taken_0x264eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264eb4) {
            ctx->pc = 0x264E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264e64;
        }
    }
    ctx->pc = 0x264EBCu;
    // 0x264ebc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x264ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x264ec0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x264ec4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264ec8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264ecc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ed4: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x264ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x264ed8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x264ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264edc: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x264edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x264ee0: 0xafbe00dc  sw          $fp, 0xDC($sp)
    ctx->pc = 0x264ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 30));
    // 0x264ee4: 0x0  nop
    ctx->pc = 0x264ee4u;
    // NOP
label_264ee8:
    // 0x264ee8: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x264ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x264eec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264ef0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264ef4: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x264ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x264ef8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264efc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x264efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x264f00: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264f04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264f08: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264f0c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264f10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x264F10u;
    {
        const bool branch_taken_0x264f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264f10) {
            ctx->pc = 0x264F58u;
            goto label_264f58;
        }
    }
    ctx->pc = 0x264F18u;
label_264f18:
    // 0x264f18: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264f1c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x264f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x264f20: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264f24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f28: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x264f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x264f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f30: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264f34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f38: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264f3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f40: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264f44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f48: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x264f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x264f4c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264f50: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264f54: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
label_264f58:
    // 0x264f58: 0xae15005c  sw          $s5, 0x5C($s0)
    ctx->pc = 0x264f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 21));
    // 0x264f5c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x264f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f60: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x264f64: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264F64u;
    {
        const bool branch_taken_0x264f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264f64) {
            ctx->pc = 0x264F80u;
            goto label_264f80;
        }
    }
    ctx->pc = 0x264F6Cu;
    // 0x264f6c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f70: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x264F70u;
    SET_GPR_U32(ctx, 31, 0x264F78u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x264F70u, 0x264F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F78u;
label_264f78:
    // 0x264f78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f7c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x264f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_264f80:
    // 0x264f80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x264f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x264f84: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x264f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x264f88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x264f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x264f8c: 0xae031240  sw          $v1, 0x1240($s0)
    ctx->pc = 0x264f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 3));
label_264f90:
    // 0x264f90: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x264f90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x264f94: 0x0  nop
    ctx->pc = 0x264f94u;
    // NOP
label_264f98:
    // 0x264f98: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x264f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264f9c: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x264f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264fa0: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x264FA0u;
    {
        const bool branch_taken_0x264fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264fa0) {
            ctx->pc = 0x264AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264ad0;
        }
    }
    ctx->pc = 0x264FA8u;
    // 0x264fa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fac: 0x9025e650  lbu         $a1, -0x19B0($at)
    ctx->pc = 0x264facu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264fb0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x264fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264fb4: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x264fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x264fb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x264fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264fbc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x264fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x264fc0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x264fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x264fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264fc8: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x264fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x264fcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fd0: 0xac33e680  sw          $s3, -0x1980($at)
    ctx->pc = 0x264fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x264fd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fd8: 0xac34e67c  sw          $s4, -0x1984($at)
    ctx->pc = 0x264fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x264fdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fe0: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x264fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264fe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fe8: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x264fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x264fec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x264fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x264ff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264ff4: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x264ff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x264ff8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x264ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264ffc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264ffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265000: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x265000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265004: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x265004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265008: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x265008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26500c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26500cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26501c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26501cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265020: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x265020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x265024: 0x3e00008  jr          $ra
    ctx->pc = 0x265024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26502Cu;
}
