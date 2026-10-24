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

// Function: entry_002016f8
// Address: 0x2016f8 - 0x201940
void entry_002016f8_0x2016f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002016f8_0x2016f8");
#endif

    ctx->pc = 0x2016f8u;

    // 0x2016f8: 0x26520120  addiu       $s2, $s2, 0x120
    ctx->pc = 0x2016f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x2016fc: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x201700: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x201700u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x201704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x201704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x201708: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201708) {
            ctx->pc = 0x201534u;
            return;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201714: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201718: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20171c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201720: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201724: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201728: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20172c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201730: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201738: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20173c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20173cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201740: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201744: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201748: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20174c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201750: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201754: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201758: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20175c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201760: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201764: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201768: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20176c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20176cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201770: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x201770u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x201774: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x201774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x201778: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20177c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201780: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x201780u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x201784: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201788: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20178c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201790: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201794: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x201794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201798: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x20179c: 0x3464080a  ori         $a0, $v1, 0x80A
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2058);
    // 0x2017a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017a4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017a8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2017a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2017ac: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2017acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2017b0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017b4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017b8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2017bc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017c0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2017c8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017cc: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2017ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2017d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2017d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2017dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2017dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2017e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017e4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017e8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2017e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2017ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017f0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2017f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2017f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2017fc: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2017fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201800: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201804: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201808: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20180c: 0xac230ac0  sw          $v1, 0xAC0($at)
    ctx->pc = 0x20180cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AC0u, _value); } while (0);
    // 0x201810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201814: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201818: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20181c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201820: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201824: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201828: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20182c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201830: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201838: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20183c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201840: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201844: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x201844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201848: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x201848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20184c: 0x48102  srl         $s0, $a0, 4
    ctx->pc = 0x20184cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x201850: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201854: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x201854u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201858: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20185c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x201860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x201864: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201868: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x201868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20186c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201870: 0x24630ad0  addiu       $v1, $v1, 0xAD0
    ctx->pc = 0x201870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
    // 0x201874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201878: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20187c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20187cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201880: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201884: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x201884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x201888: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x201888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20188c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x20188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x201890: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x201890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x201894: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201898: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20189c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20189cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2018a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018a4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018a8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2018a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2018ac: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2018acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2018b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2018b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2018b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2018b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018bc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018c0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2018c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2018c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018c8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2018d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018d4: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2018d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2018d8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2018dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2018dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2018e0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2018e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2018e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2018e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2018e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2018ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2018f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2018f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2018f4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2018f8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2018f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2018fc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x201900: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201904: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201908: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x201908u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x20190c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201910: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201914: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x201914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x201918: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20191c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x20191cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201920: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20192c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20192cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201934: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x201938: 0x3e00008  jr          $ra
    ctx->pc = 0x201938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201940u;
}
